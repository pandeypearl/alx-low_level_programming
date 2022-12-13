#!/bin/bash
wget -O /tmp/libgiga.so https://github.com/pandeypearl/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
