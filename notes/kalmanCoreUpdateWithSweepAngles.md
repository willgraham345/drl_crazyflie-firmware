****
# Process Flow
1. Intialize variables
	1. `s` (vec3d, 3x1 from coreData)
	2. `R_cf` (arm_marix_instance_32)
	3. `scf_` (arm_marix_instance_32)
	4. `s_` (arm_marix_instance_32) 
		1. Is the matrix multiplication of `R_cf` and `s_cf`
		2. 
2. Initialize $p_{cf}$ and add $s$ to it
	1. from [[kalman_core.h]], gets out the x, y and z, while adding the `s` term from before
		1. This is where  `s` is calculated
3. Creates $p_r$ as `pr`, from `sweepInfo->rotorPos`
4. Creates `stmp_`
	1. 3x1 matrix
	2. difference between $p_{cf}$ and `*pr`, which is the difference between the crazyflie positon and the rotor position.
		1. Might be  $p_{bs}$ ?
5. Creates `sr`
	1. Makes `Rr_inv_` based on sweepInfo -> rotorRotInv 
	2. Makes `sr_` which has `sr` passed in.
	3. `sr_` is the matriix multiplication of `Rr_inv_ ` and `stmp_`
6. Calls [[lighthouseCalibrationMeasurementModelLh2]] as a function pointer
7. Generates `predictedSweepAngle`, `measuredSweeepAngle`, and `error`
8. calls outlierFilterLighthouseValidateSweep(), which makes sure nothing is over a threshhold and time delay. 

Calls `outlierFilterLighthouseValidateSweep()` which calculates the `H` vector.
- The `H` vector is a partial derivative of the sweep angle on the $(x, y, z)$ within the rotor's reference frame.  


# Data types of variables
`this`
* [[kalmanCoredata_t]] (within kalman_core.h)
	* `q` = attitude quaternion
	* `S` = internally estimated state (xyz, velocity, attitude error)
	* `R` = quad's attitude rotation matrix
- [[sweepAngleMeasurement_t]]
	- [[sensorPos]] = sensor position in CF reference frame
		- set in [[estimatePositionSweepsLh2]] with sensorDeckPositions
		- There's no way here to flip it. It's only the orientationon the xy plane.
	- rotorPos = position of rotor in global frame
	- rotorRot = $R_r$
	- rotorRotInv = $R_r^{-1}$
	- [[lighthouseCalibrationSweep_t]]* calib;
	- [[lighthouseCalibrationMeasurementModel_t]]


# Other stuff
--- 
 Refers to two papers:
- https://ieeexplore.ieee.org/document/7139421?arnumber=7139421
- https://arc.aiaa.org/doi/abs/10.2514/1.G000848 
Crazyflie website:
- https://www.bitcraze.io/documentation/repository/crazyflie-firmware/master/functional-areas/lighthouse/kalman_measurement_model/

---

##### Parameters passed in:
- `&coreData, &m.data.sweepAngle, nowMs, &sweepOutlierFilterState`)
	- `&coreData` is the internally estimated state: x, y, z, px py pz (velocity) and attitude error (D0 d1 D2), attitude q, and a rotation matrix R. 
	- Refers to two papers:
		- https://ieeexplore.ieee.org/document/7139421?arnumber=7139421
		- https://arc.aiaa.org/doi/abs/10.2514/1.G000848

---
