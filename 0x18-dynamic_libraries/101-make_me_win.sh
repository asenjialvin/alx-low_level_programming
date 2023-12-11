#!/bin/bash
gcc -shared -o libhack.so -fPIC lottery.c
export LD_PRELOAD=./libhack.so:$LD_LIBRARY_PATH
