# Crazyflie firmware release checklist
====================================
## To Do
- Flip orientation of the crazyflie within the cfclient


## How to Flash
Making default firmware
```
make cf2_defconfig
make -j 12
```
Compiling New Firmware for Crazyflie already in Bootloader
```
make cload
```
Automatically enter bootloader mode
```
CLOAD_CMDS="-w radio://0/80/2M" make cload
```
# Notes From Will
## Files and Functions
lighthouse_position_est.c 
- (/home/drewlab/drl_crazyflie-firmware/crazyflie-firmware/src/modules/src/lighthouse/lighthouse_position_est.c)
lighthouse_geometry.c
- /home/drewlab/drl_crazyflie-firmware/crazyflie-firmware/src/utils/src/lighthouse/lighthouse_geometry.c

lighthouse_position_est.c
I think this file is used to update the lighthouse_geometry.h, but I'm not sure
- We might also need to disable `CONFIG_DECK_LIGHTHOUSE_AS_GROUNDTRUTH` if we want to control only through vicon 
- `sensorDeckPositions` is a spot the Github guy directed me to look at. It's important for yaw control. The Lighthouse may only be contributing to the yaw control of the crazyflies

lighthouse_geometry.c
Where the actual lighthouse position estimate is made
- `origin1` and `origin2` are parameters that shouldn't be static if the turtlebot is in motion. 
  - We'll need to change them to dynamic pointers? (or at least modifyable memory)


lighthouse_storage.h
- I think this might be where we store the geometry when we "Write to Crazyflie" from the python client. 
### General Notes about the Firmware
any arm_**** functions are sourced from the vendor folder, and are microcontroller-specific instructions


# Questions for Dr. Drew
1. Any way to make the crayzflie enter bootloader mode from the command line using the Crazyradio?
  - The above methods (CLOAD_CMDS .... make cload) don't work
    - python3 -m cfloader -w radio://0/80/2M flash  cf2.bin stm32-fw
    Reset to bootloader mode ...
    Failed to flash: Could not connect to bootloader
    make[1]: *** [/home/drewlab/drl_crazyflie-firmware/crazyflie-firmware/Makefile:142: cload] Error 255
    make[1]: Leaving directory '/home/drewlab/drl_crazyflie-firmware/crazyflie-firmware/build'
    make: *** [tools/kbuild/Makefile.kbuild:150: sub-make] Error 2
2. Tips for learning how Makefiles work?
3. In the src directory, what's the difference between interface and utils? 