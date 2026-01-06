import soundfile

from kokoro import KPipeline

if __name__ == '__main__':

    # Create a pipeline (use 'a' for default American English)
    pipeline = KPipeline(lang_code="a", repo_id='hexgrad/Kokoro-82M')

    text = "Hello world from Kokoro TTS."

    # Run synthesis and get audio batches
    for _, _, audio in pipeline(text, voice="af_heart"):
        # `audio` is a NumPy array at 24 kHz
        print("Generated audio shape:", audio.shape)
        soundfile.write("out.wav", audio, 24000)
