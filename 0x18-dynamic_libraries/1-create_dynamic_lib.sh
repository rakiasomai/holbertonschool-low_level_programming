#!/bin/bash
gcc *.c -c -fPIC
gcc -shared *.o -o libholberton.so
