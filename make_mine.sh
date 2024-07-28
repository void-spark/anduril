#!/bin/bash

ROOT_PATH=$(pwd)
echo Using folder: $ROOT_PATH

docker run -it --rm -v $ROOT_PATH:$ROOT_PATH -w $ROOT_PATH -u ubuntu anduril2 /bin/bash -c "make clean && make emisar 2ch && make emisar d1v2 nofet && make noctigon m44"
