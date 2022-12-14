#!/usr/bin/env bash

docker run -it --rm --name=env_clang \
	--mount type=bind,source=${PWD},target=/src \
	--mount type=bind,source=${PWD}/build/clang,target=/build \
	tigerchanay/clang:0.1 \
	bash