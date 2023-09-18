#!/bin/bash
wget -O /tmp/shlib.so https://github.com/KennyChukwuebuka/alx-low_level_programming/raw/master/0x18-dynamic_libraries/shlib.so
export LD_PRELOAD=/tmp/shlib.so
