# Base Dockerfile for the graphql-react-prototype application
# Author: Andrew Jarombek
# Date: 6/28/2020

FROM node:18.16.1

LABEL maintainer="andrew@jarombek.com" \
      version="1.0.0" \
      description="Dockerfile for setting up the graphql-react-prototype execution/test environment"

COPY . app

WORKDIR app
RUN yarn
