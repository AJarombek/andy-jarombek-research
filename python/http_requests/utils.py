"""
Utility functions for making HTTP requests for files.
Author: Andrew Jarombek
Date: 1/7/2023
"""

import logging
import math

from requests import Response


def format_file_sizes(size: int) -> str:
    if size == 0:
        return "0 B"

    size_name = ("B", "KB", "MB", "GB", 'TB')
    index = int(math.floor(math.log(size, 1000)))
    denominator = math.pow(1000, index)
    return f"{round(size / denominator, 2)} {size_name[index]}"


def validate_http_status(res: Response, should_raise: bool = True) -> bool:
    if res.status_code >= 400:
        logging.error(f"{res.url} returned error status code {res.status_code}")

        if should_raise:
            res.raise_for_status()

        return False

    return True
