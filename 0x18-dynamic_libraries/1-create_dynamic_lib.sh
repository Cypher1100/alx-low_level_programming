#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -g *.c
gcc *.o -shared -o liball.so
chmod 644 liball.so
export LD_LIBRARY_PATH=".:$LD_LIBRARY_PATH"
