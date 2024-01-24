# Makefile for prompt engineering research
# Author: Andrew Jarombek
# Date: 12/31/2023

install:
	poetry install

lint:
	poetry run ruff check

spell_check:
	poetry run codespell --toml pyproject.toml

format:
	poetry run ruff format

run-chatbot:
	@export OPENAI_API_KEY=$(api_key) && poetry run run-main