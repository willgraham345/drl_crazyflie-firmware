#!/bin/bash
#make cf2_defconfig # only necessary if you're running it without a .config written. easier to use <make menuconfig> as the thing.
make clean
make -j 16
CLOAD_CMDS="-w radio://0/80/2M" make cload
