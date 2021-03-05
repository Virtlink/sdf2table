FROM ubuntu:focal

RUN apt-get update \
 && apt-get install --no-install-recommends --yes \
   bash \
   sudo \
   wget \
   curl \
   pkg-config \
   graphviz \
   build-essential \
 && rm -rf /var/lib/apt/lists/*
 