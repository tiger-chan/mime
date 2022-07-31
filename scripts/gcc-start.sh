#!/usr/bin/env bash

docker run -it --rm --name=env_gcc-9 \
	--mount type=bind,source=${PWD},target=/src \
	--mount type=bind,source=${PWD}/build/gcc,target=/build \
	tigerchanay/gcc-9:0.1 \
	bash