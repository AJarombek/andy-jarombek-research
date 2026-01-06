FROM python:3.13

# Install uv
RUN pip install uv

# Set workdir and copy project files
WORKDIR /workspace/app
COPY ./app /workspace/app

# Install dependencies from pyproject.toml
RUN uv venv && uv pip install .

CMD [ "python3", "main.py" ]
