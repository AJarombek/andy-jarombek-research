# Dockerfile which runs an employee API.
# Author: Andrew Jarombek
# Date: 5/7/2022

FROM python:3.8-alpine

LABEL maintainer="andrew@jarombek.com" \
      version="1.0.0" \
      description="Dockerfile which runs an employee API."

WORKDIR /src
COPY . .
RUN apk add gcc libc-dev linux-headers \
    && pip install pipenv \
    && pipenv install --system

STOPSIGNAL SIGTERM
EXPOSE 5000

ENTRYPOINT ["uwsgi", "--ini", "uwsgi.ini"]