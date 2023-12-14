#!/bin/bash
wget -P .. https://github.com/madepores/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libhint.so
export LD_PRELOAD="$PWD/../libhint.so"
