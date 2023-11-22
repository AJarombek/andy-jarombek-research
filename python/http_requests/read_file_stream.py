"""
Reading a file over HTTP - Streaming read using iter_content.
Author: Andrew Jarombek
Date: 1/5/2023
"""

import logging

import requests

from http_requests.utils import format_file_sizes


def read(source: str, destination: str) -> None:
    filename = source.split("/")[-1]
    logging.info(f"making request to {source}")

    res = requests.get(source, stream=True, timeout=120)
    size = res.headers.get('Content-Length')

    with open(f"{destination}/{filename}", "wb") as f:
        logging.info(f"saving request data to {filename}")

        if size is None:
            f.write(res.content)
        else:
            size = int(size)
            progress = 0

            for index, data in enumerate(res.iter_content(chunk_size=8192)):
                progress += len(data)
                f.write(data)

                if index % 10_000 == 0:
                    logging.info(
                        f"downloaded: {format_file_sizes(progress)} / {format_file_sizes(size)}"
                    )
