SELF_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

TARGET ?= x86_64-pc-linux-gnu

.PHONY: all build-image build

all: build-image build

build-image:
	docker image build $(SELF_DIR) -t sdf2bundle

build:
	docker run -it -e TARGET=$(TARGET) -v $(SELF_DIR):/repo sdf2bundle

#.SILENT:
# -e TARGET=x86_64-apple-darwin20.3.0