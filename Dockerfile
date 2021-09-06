FROM ubuntu:20.04

RUN apt clean
RUN apt update
RUN DEBIAN_FRONTEND="noninteractive" apt install git \
                gcc-arm-none-eabi \
                build-essential \
                cmake \
                -y

CMD ["/usr/bin/make", "-C", "/build/"]