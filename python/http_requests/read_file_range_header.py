"""
Reading a file over HTTP - using an HTTP Range header.
Author: Andrew Jarombek
Date: 1/7/2023
"""

import logging

import requests

from http_requests.utils import format_file_sizes


def read(source: str, destination: str) -> None:
    filename = source.split("/")[-1]
    logging.info(f"making request to {source}")

    res = requests.get(source, stream=True, timeout=120)

    total_size = res.headers.get('Content-Length')
    range_enabled = res.headers.get('Accept-Ranges') == 'bytes'

    total_size = 0 if total_size is None else int(total_size)
    formatted_total_size = format_file_sizes(total_size)

    with open(f"{destination}/{filename}", "wb") as f:
        logging.info(f"Saving request data to {filename}")
        progress = 0

        if range_enabled:
            logging.info("Range header enabled")
            res.close()
            range_length = 1_000_000
            index = 0

            while progress < total_size:
                headers = {'Range': f'bytes={progress}-{progress + range_length}'}
                res = requests.get(source, headers=headers)
                f.write(res.content)

                progress += range_length
                index += 1

                if index % 10 == 0:
                    logging.info(
                        f"Downloaded: {format_file_sizes(progress)} / {formatted_total_size}"
                    )
        else:
            logging.info("Range header not enabled")
            chunk_size = 8_192
            for index, data in enumerate(res.iter_content(chunk_size=chunk_size)):
                progress += len(data)
                f.write(data)

                if progress % 10_000 == 0:
                    logging.info(
                        f"downloaded: {format_file_sizes(progress)} / {formatted_total_size}"
                    )
