# Crazyflie firmware release checklist
====================================
## To Do
- Flip orientation of the crazyflie within the cfclient

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

### General Notes about the Firmware
any arm_**** functions are sourced from the vendor folder, and are microcontroller-specific instructions