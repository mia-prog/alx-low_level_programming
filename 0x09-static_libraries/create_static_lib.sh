#!/bin/bash
for file in *.c; do gcc -o "${file%.c}" "$file"; done
ar rcs liball.a *.o
