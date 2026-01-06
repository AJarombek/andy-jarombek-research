from pathlib import Path

import soundfile
import numpy as np
from kokoro import KPipeline

short_1: tuple[str, str] = ("short_1", "S&P 500 hits fresh all-time high, Dow heads for first close over 49,000: Live updates")
short_2: tuple[str, str] = ("short_2", "Silver is on pace for a record close above $80 for the first time. It was last higher by 4.4% to 80.08 an ounce.")

long_1: tuple[str, str] = ("long_1", """
    Above the garage, in the chauffeurs' living area, he found the missing paintings and rugs - and his wife perched on a couch.  
"Mousie, what the hell is happening here?" Livermore asked.  "What are you doing?"
    Tears in her eyes, Dorothy explained that she had learned of the terrible news on the radio.  
Investors had lost everything.  She had assumed that they, too, were broke.  
Perhaps wisely, she had picked out important valuables to protect from creditors and scooped up her jewelry, remembering he had pawned her gems in the past when he had needed to raise a stake.
    He smiled and told her to come to dinner, and bring the jewelry.
    "Oh, J.L., you need them again?" she asked.
    "No.  Today was the best day I ever had in the market," he said.
    Because he had been shorting stocks, he was the one person who made money when they fell - a lot of money.  
His profits plus equity over the last few days amounted to $100 million.
    "We're going to be fine.  I certainly won't be needing those jewels."
""")

long_2: tuple[str, str] = ("long_2", """
    Unfortunately, most market participants had lost sight of "fundamental values" long before October 1929 - and that couldn't be blamed solely on the dishwashers and shoe salesman and scullery maids who'd thrown their caps and bonnets into the ring.
    For his part, Carter Glass, back in Washington, seemed almost gleeful, congratulating himself about his longtime contention that the market had been perverted by speculators.  
"I expected it long ago." he told reporters about the stock market's fall that day.  
"It is just the result of Mitchellism," he said, taking a shot at Charles Mitchell, again.  "It was inevitable."  
He continued, "It is a sign the gamlers have reached their limit and they can thank Mr. Mitchell."

---

    With the markets in a full-on meltdown, astrologer Evangeline Adams hosted a larger group session that Thursday night to counsel apprehensive small investors rather than conduct private sessions.  
She held the meeting in her waiting room.  There were just too many people who sought her advice.
    Adams understood human nature perhaps better than many of the bankers and as such provided hope.  
The seer reassured her clients that the movement of the planets had generated "spheres of influence over susceptible groups, who in turn will continue to influence the market," at least as far as Friday and Saturday were concerned.
    As people left her office late that night, Adams contacted her own broker, who delivered the bad news: The seer's portfolio had lost $100,000.  
Whatever the stars and planets had whispered in her ear, she now ordered him to sell everything as soon as trading began the next day.
""")


def make_output_filename(output_dir: Path, model_name: str, text_label: str) -> Path:
    filename = f"{model_name}-{text_label}.wav"
    return output_dir / filename


class BaseModelRunner:
    """Abstract base for model-specific runners.

    Subclasses should implement run(texts, output_dir).
    """

    def __init__(self, name: str):
        # Only store the model name here; model-specific classes should set repo_id, lang_code and voices.
        self.name = name

    def run(self, texts: list[tuple[str, str]], output_dir: Path, sample_rate: int = 24000):
        raise NotImplementedError


class KokoroRunner(BaseModelRunner):
    """Runner for the Kokoro model family using KPipeline."""

    def __init__(self, name: str = "kokoro"):
        super().__init__(name)
        # Hard-code kokoro-specific configuration here as requested
        self.repo_id = "hexgrad/Kokoro-82M"
        self.lang_code = "a"
        self.voice = "af_heart"

    def run(self, texts: list[tuple[str, str]], output_dir: Path, sample_rate: int = 24000):
        output_dir.mkdir(parents=True, exist_ok=True)

        pipeline = KPipeline(lang_code=self.lang_code, repo_id=self.repo_id)

        # Use the single hard-coded voice. Collect all audio segments (batches) for each text
        # and concatenate them before writing a single WAV file per text.
        for label_name, text in texts:
            segments = []
            for batch_idx, _, audio in pipeline(text, voice=self.voice):
                # Copy into a new numpy array to avoid shared/mutable views between batches.
                # Also enforce a consistent dtype (float32) for soundfile.
                arr = np.array(audio, dtype=np.float32, copy=True)
                segments.append(arr)

            if not segments:
                print(f"No audio produced for {self.name}/{label_name} (voice={self.voice})")
                continue

            try:
                full_audio = np.concatenate(segments, axis=0)
            except ValueError:
                full_audio = np.concatenate([s.reshape(-1) for s in segments], axis=0)

            out_path = make_output_filename(output_dir, self.name, label_name)
            print("Writing", out_path, "shape=", getattr(full_audio, "shape", None))
            soundfile.write(str(out_path), full_audio, sample_rate)


if __name__ == "__main__":
    # Instantiate model-specific runners. Add other runners (classes) here as new models are experimented with.
    runners: list[BaseModelRunner] = [
        KokoroRunner(),
    ]

    # Provide texts as a list of (name, text) tuples — the name becomes the filename suffix.
    texts = [
        short_1,
        short_2,
        long_1,
        long_2,
    ]

    outputs_dir = Path("outputs")

    for runner in runners:
        runner.run(texts, outputs_dir)
