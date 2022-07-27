#!/usr/bin/env bash

docker run -it --rm --name=env_gcc-9 \
	--mount type=bind,source=${PWD},target=/src \
	--mount type=bind,source=${PWD}/build/gcc,target=/build \
	env-gcc-9:latest \
	bash