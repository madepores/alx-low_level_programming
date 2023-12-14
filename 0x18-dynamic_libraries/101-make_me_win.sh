#!/bin/bash
wget -P .. https://raw.githubusercontent.com/madepores/alx-low_level_programming/main/0x18-dynamic_libraries/libhint.so
export LD_PRELOAD="$PWD/../libhint.so"
