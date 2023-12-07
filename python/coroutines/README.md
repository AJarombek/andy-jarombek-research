### Overview

Python code related to coroutines.

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
pylint .
```

### Files

| Filename                     | Description                                                             |
|------------------------------|-------------------------------------------------------------------------|
| `coroutines.py`              | Python code for running coroutines.                                     |
| `Dockerfile`                 | Dockerfile for testing the `coroutines` program.                        |
| `run.sh`                     | Shell script which runs on the Docker container upon startup.           |