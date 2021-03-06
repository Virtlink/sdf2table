SELF_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

HOST ?= x86_64-pc-linux-gnu

.PHONY: all build-image build copy-dist

all: build-image build copy-dist

build-image:
	docker image build $(SELF_DIR) -t sdf2bundle

build:
	docker run -it -e HOST=$(HOST) -v $(SELF_DIR):/repo sdf2bundle

enter:
	docker run -it -e HOST=$(HOST) -v $(SELF_DIR):/repo sdf2bundle /bin/bash

copy-dist:
	mkdir -p $(SELF_DIR)dist/
	cp $(SELF_DIR)sdf2bundle/pgen/src/.libs/sdf2table $(SELF_DIR)dist/sdf2table
	#cp $(SELF_DIR)sdf2bundle/pgen/sdfchecker/src/.libs/sdfchecker $(SELF_DIR)dist/sdfchecker
	#cp $(SELF_DIR)sdf2bundle/pgen/removevarsyntax/src/.libs/removevarsyntax $(SELF_DIR)dist/removevarsyntax