
# Process Flow
1. Intialize variaables
	1. s
	2. R_cf
	3. scf_
	4. s
	5. 

---

 Refers to two papers:
		- https://ieeexplore.ieee.org/document/7139421?arnumber=7139421
		- https://arc.aiaa.org/doi/abs/10.2514/1.G000848 

---

##### Parameters passed in:
- `&coreData, &m.data.sweepAngle, nowMs, &sweepOutlierFilterState`)
	- `&coreData` is the internally estimated state: x, y, z, px py pz (velocity) and attitude error (D0 d1 D2), attitude q, and a rotation matrix R. 
	- Refers to two papers:
		- https://ieeexplore.ieee.org/document/7139421?arnumber=7139421
		- https://arc.aiaa.org/doi/abs/10.2514/1.G000848