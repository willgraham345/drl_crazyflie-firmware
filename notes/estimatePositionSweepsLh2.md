## General Process
- creates a pointer to the basestation calibration from the appState 
- grabs sweepInfo from appState (a [[pulseProcessor_t]] type), and indexes a few variables out of it. 
	- Gets out rotorPos, rotorRot
	- rotorRot is a matrix, and pos is a vector
	- rotorRotInv is another matrix


- calls -> **[[lighthouseCalibrationMeasurementModelLh2]]** 
	- puts this in the sweepInfo.calibrationMeasurementModel field. 
		- This does a few of the calculations on kalmanmeasurementmodel, specifically the $\alpha_p$ angle
	- This isn't called again within the funciton. It sets up how to do things, but never calls it again. 
- sets sweepInfo.sensorPos as sensorDeckPositions
	- Used in [[kalmanCoreUpdateWithSweepAngles]]
- 