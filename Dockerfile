FROM ubuntu:22.04

RUN apt-get update

RUN apt install -y clang-tidy

RUN apt-get install -y lcov

RUN apt install -y clang-format

RUN mkdir -p /root/.ssh/

ADD id_rsa /root/.ssh/id_rsa

RUN chmod 600 /root/.ssh/id_rsa

RUN touch /root/.ssh/known_hosts

RUN ssh-keyscan github.com >> /root/.ssh/known_hosts

RUN git clone git@github.com:SourceTil/2022_2_SL.git
