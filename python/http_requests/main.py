"""
Entrypoint for working with http requests.
Author: Andrew Jarombek
Date: 1/24/2023
"""

import read_file_memory
import read_file_stream
import read_file_range_header
import read_zipfile

if __name__ == '__main__':
    # Datasets from https://data.gov/

    # https://dashboard.data.gov/offices/detail/49019/2021-12-31
    read_file_memory.read(
        "https://www.energy.gov/sites/default/files/2023-01/pdl010123.json",
        "./dest/memory",
    )

    # https://dashboard.data.gov/offices/detail/49015/2023-03-31
    read_file_stream.read(
        "https://www.usda.gov/sites/default/files/documents/data.json", "./dest/stream"
    )

    # https://dashboard.data.gov/offices/detail/52668/2023-03-31
    read_file_range_header.read(
        "https://www.commerce.gov/sites/default/files/data.json", "./dest/range_header"
    )

    read_file_range_header.read(
        "https://asset.saintsxctf.com/saintsxctf-vid.mp4", "./dest/range_header"
    )

    read_file_range_header.read(
        "https://asset.saintsxctf.com/saintsxctf.png", "./dest/range_header"
    )

    # https://catalog.data.gov/dataset/zip-code-boundaries
    read_zipfile.read(
        "https://data.cityofnewyork.us/download/i8iw-xf4u/application/zip", "./dest/zip"
    )
