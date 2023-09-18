#!/bin/bash
wget https://github.com/KennyChukwuebuka/alx-low_level_programming/raw/master/0x18-dynamic_libraries/shlib.so -P /tmp/shlib.so
LD_PRELOAD=/tmp/shlib.so
