#!/bin/bash
gcc -c -fPIC *.c -o output.o
gcc -shared -o liball.so output.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
