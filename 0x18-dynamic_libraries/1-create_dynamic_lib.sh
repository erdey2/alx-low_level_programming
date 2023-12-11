#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared liball.so
