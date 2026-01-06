from kokoro import Kokoro

model = Kokoro.from_pretrained("hexgrad/kokoro-7b")
output = model.generate("Hello, world!")
print(output)
