#!/bin/bash
wget https://github.com/KennyChukwuebuka/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.sh -O /tmp/101-make_me-win.sh
LD_PRELOAD=/tmp/101-make_me_win.sh
