"""
Reading a zip file over HTTP.
Author: Andrew Jarombek
Date: 1/8/2023
"""

import logging
import zipfile
from io import BytesIO

import requests

from http_requests.utils import format_file_sizes


def read(source: str, destination: str) -> None:
    logging.info(f"making request to {source}")

    res = requests.get(source, stream=True, timeout=120)

    with zipfile.ZipFile(BytesIO(res.content), mode='r') as archive:
        for filename in archive.namelist():
            logging.info(f"Extracting file from zip: {filename}")

            zipfile_info = archive.getinfo(filename)
            logging.info(f"File compression format: {zipfile_info.compress_type}")
            logging.info(
                f"Compressed file size: {format_file_sizes(zipfile_info.compress_size)}"
            )
            logging.info(
                f"Uncompressed file size: {format_file_sizes(zipfile_info.file_size)}"
            )

            with open(f"{destination}/{filename}", "wb") as f:
                with archive.open(filename, mode="r") as archive_file:
                    f.write(archive_file.read())
