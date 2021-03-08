# Image for building sdf2table and related tools
#
# Run this image with the repository mounted to `/repo`
FROM ubuntu:focal

RUN apt-get update \
 && apt-get install --no-install-recommends --yes \
    bash \
    sudo \
    git \
    wget \
    curl \
    pkg-config \
    graphviz \
    build-essential \
 && rm -rf /var/lib/apt/lists/*

SHELL ["/bin/bash", "-c"]

CMD cd /repo/ && bash build-linux-intel.sh
