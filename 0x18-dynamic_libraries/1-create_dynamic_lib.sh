#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared *.o  -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
