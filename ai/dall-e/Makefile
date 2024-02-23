# Makefile for prompt engineering research
# Author: Andrew Jarombek
# Date: 2/18/2024

install:
	poetry install

lint:
	poetry run ruff check

spell_check:
	poetry run codespell --toml pyproject.toml

format:
	poetry run ruff format

run-logo-creation:
	@export OPENAI_API_KEY=$(api_key) && poetry run run-main