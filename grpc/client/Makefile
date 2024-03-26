# Makefile for a client making requests to a gRPC service
# Author: Andrew Jarombek
# Date: 3/24/2024

install:
	poetry install

lint:
	poetry run ruff check

spell_check:
	poetry run codespell --toml pyproject.toml

format:
	poetry run ruff format
