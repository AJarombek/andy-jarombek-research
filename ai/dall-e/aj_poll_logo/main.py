import inspect
import os

from dotenv import load_dotenv
from openai import OpenAI
import requests

OPENAI_MODEL = "gpt-3.5-turbo"
OPENAI_API_KEY = os.environ.get("OPENAI_API_KEY")

load_dotenv()


def main():
    client = OpenAI(api_key=OPENAI_API_KEY)

    response = client.images.generate(
        model="dall-e-3",
        prompt=inspect.cleandoc("""
        Modern, VERY simplistic logo for website 'AJ Top 25 Poll', 
        which is a software engineering poll website inspired by the AP Top 25 Poll.
        The logo should incorporate the letters A and J and have a transparent background.
        """),
        size="1024x1024",
        quality="standard",
        n=1,
    )

    image_url = response.data[0].url
    print(image_url)

    response = requests.get(image_url)

    if response.status_code == 200:
        with open("logo.png", "wb") as f:
            f.write(response.content)
        print("Image saved to 'logo.png'")
    else:
        print(f"Failed to download image. Status code: {response.status_code}")
