### Overview

Python code related to making HTTP requests.

### Files

| Filename                     | Description                                                                          |
|------------------------------|--------------------------------------------------------------------------------------|
| `Dockerfile`                 | Dockerfile for testing the `http_requests` program.                                  |
| `main.py`                    | Python entrypoint for making HTTP requests.                                          |
| `read_file_memory.py`        | Python code for reading a file into memory all at once.                              |
| `read_file_range_header.py`  | Python code for reading a file using the `Range` HTTP header.                        |
| `read_file_stream.py`        | Python code for reading a file by streaming the data using `requests`.               |
| `read_zipfile.py`            | Python code for reading a zip file using `requests`.                                 |
| `utils.py`                   | Python code for utility functions used to download files over HTTP.                  |
| `run.sh`                     | Shell script which runs on the Docker container upon startup.                        |