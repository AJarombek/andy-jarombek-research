### Overview

Python programming code, tested and run on Docker containers.

### Commands

**Local Coding Environment Setup**

```bash
# One time Poetry install
pip3 install poetry

# Start the virtual environment and install the dependencies
poetry shell
poetry install

# Update Dependencies
poetry lock
poetry install
```

**Format Code**

```bash
black .
```

**Lint Code**

```bash
pylint coroutines
pylint http_requests
```

### Directories

| Directory Name   | Description                                                                    |
|------------------|--------------------------------------------------------------------------------|
| `.github`        | GitHub Actions for CI/CD pipelines.                                            |
| `.run`           | Run configurations to use in the PyCharm IDE.                                  |
| `coroutines`     | Python code using coroutines.                                                  |
| `http_requests`  | Python code making HTTP requests.                                              |
| `poetry.lock`    | Lock file containing Python dependencies installed by Poetry.                  |
| `pyproject.toml` | [Poetry](https://python-poetry.org/) dependency management configuration file. |
