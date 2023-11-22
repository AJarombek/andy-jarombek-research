"""
Reading a file over HTTP - Reading entire file into memory at once.
Author: Andrew Jarombek
Date: 1/7/2023
"""

import logging

import requests


def read(source: str, destination: str) -> None:
    filename = source.split("/")[-1]
    logging.info(f"making request to {source}")

    res = requests.get(source, timeout=120)

    with open(f"{destination}/{filename}", "wb") as f:
        logging.info(f"saving request data to {filename}")
        f.write(res.content)
