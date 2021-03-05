# Image for building sdf2table and related tools
#
# Run this image with the repository mounted to `/repo`
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

SHELL ["/bin/bash", "-c"]

ENV LD_LIBRARY_PATH=/usr/local/lib

CMD cd /repo/ && bash build.sh
