# Dockerfile for running the coroutines program on Alpine Linux using Python 3.11
# Author: Andrew Jarombek
# Date: 9/9/2022

FROM python:3.11-alpine

LABEL maintainer="andrew@jarombek.com" \
      version="1.0.0" \
      description="Dockerfile for the coroutines Python program"

WORKDIR src
COPY . .

CMD ["-c", ". ./run.sh"]
ENTRYPOINT ["/bin/sh"]