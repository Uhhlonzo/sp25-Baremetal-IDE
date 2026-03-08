#!/bin/bash


# this is alonzo's script.

#chmod +x run3.sh before use.
# then use ./run3.sh to run

cd /tools/C/alonzozul/sp25-Baremetal-IDE
riscv64-unknown-elf-gdb -ex "target extended-remote localhost:3333" -ex "monitor reset" build/app/app.elf


