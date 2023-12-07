# Dockerfile which runs an employee API.
# Author: Andrew Jarombek
# Date: 5/7/2022

FROM golang:1.15-alpine

LABEL maintainer="andrew@jarombek.com" \
      version="1.0.0" \
      description="Dockerfile which runs an employee API."

WORKDIR /src
COPY . .
RUN apk add gcc libc-dev linux-headers

STOPSIGNAL SIGTERM
EXPOSE 5000

ENTRYPOINT ["go", "run", "."]