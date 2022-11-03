FROM ubuntu:22.04

RUN apt-get update

RUN apt install -y clang-tidy

RUN apt-get install -y lcov

RUN apt install -y clang-format

RUN apt install -y git

RUN apt install -y cmake

RUN apt install -y build-essential

RUN git clone https://github.com/SourceTil/2022_2_SL.git

RUN cd 2022_2_SL


