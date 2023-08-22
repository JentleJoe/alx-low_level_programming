#!/bin/bash
gcc -c -fPIC *.c -o output.o
gcc -shared -o liball.so output.o
