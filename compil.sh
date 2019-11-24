#!/bin/bash
IFS='.' read -ra f <<< "$1"
make
./myc $f.h $f.c < $1
gcc -o $f $f.c
./$f