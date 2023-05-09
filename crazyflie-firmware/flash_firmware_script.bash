#!/bin/bash
make cf2_defconfig
make -j 16
CLOAD_CMDS="-w radio://0/80/2M" make cload