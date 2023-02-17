#!/bin/bash
make cf2_defconfig
make -j 12
make cload
