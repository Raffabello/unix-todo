FROM alpine:latest

COPY . .
WORKDIR /app

RUN apk update && apk add g++