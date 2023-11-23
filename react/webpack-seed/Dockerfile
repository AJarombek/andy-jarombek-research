# Dockerfile for the react-webpack-seed application
# Author: Andrew Jarombek
# Date: 3/17/2019

FROM node:11-alpine

LABEL maintainer="andrew@jarombek.com" \
      version="1.1.0" \
      description="Dockerfile for a React and Webpack Seed Application"

RUN mkdir /src
COPY . /src

WORKDIR /src

RUN npm install yarn -g
RUN yarn

EXPOSE 8080
ENTRYPOINT ["yarn", "run start"]