# Dockerfile for running the http_requests program on Alpine Linux using Python 3.11
# Author: Andrew Jarombek
# Date: 1/24/2023

FROM python:3.11-alpine

LABEL maintainer="andrew@jarombek.com" \
      version="1.0.0" \
      description="Dockerfile for the http_requests Python program"

WORKDIR src
COPY . .

CMD ["-c", ". ./run.sh"]
ENTRYPOINT ["/bin/sh"]