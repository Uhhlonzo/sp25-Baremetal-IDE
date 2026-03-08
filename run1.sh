#!/bin/bash


# this is alonzo's script.

#chmod +x run1.sh before use.
# then use ./run1.sh to run


cd /tools/C/alonzozul/sp25-Baremetal-IDE
cmake -S ./ -B ./build/ -D CMAKE_BUILD_TYPE=Debug -D CMAKE_TOOLCHAIN_FILE=./riscv-gcc.cmake -D CHIP=dsp25
cmake --build ./build/ --target app


