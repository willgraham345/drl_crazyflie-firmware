The light plane is offset by ${-\pi/6}$ (first is positive, second is negative), and there's an additional offset by 120$\degree$ , which is compensated for in the firmware. Not positive where that's happening. 

---- 

No subscript means that it's within the global frame 

--- 
##### Crazyflie Rotation Matrix 
$$R_{cf} \cdot \vec{v}^{cf} = \vec{v} $$
$R_{cf}$ transforms something within the crazyflie frame, into somethin in the global frame 

##### Base Station Rotation Matrix 
$$s_{bs} = R_{bs}^{-1} \cdot (\vec{s} - \vec{p}_{bs}) $$
$$ = R_{bs}^{-1} \cdot (\vec{p}_{cf} - \vec{p}_{bs}  + R_{bs} \cdot \vec{s}_{cf}) $$
##### Rotor rotation matrix 
$$s_{r} = R_r \cdot R_{bs}^{-1} \cdot (\vec{p}_{cf} - \vec{p}_{bs}  + R_{bs} \cdot \vec{s}_{cf}) $$ 