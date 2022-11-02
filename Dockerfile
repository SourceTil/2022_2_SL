FROM ubuntu:22.04

RUN apt-get update

RUN apt install -y clang-tidy

RUN apt-get install -y lcov

RUN apt install -y clang-format
