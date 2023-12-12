#!/bin/bash
wget -P /tmp https://github.com/omar3adwy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/libgiga.so
