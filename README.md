# Embedded C Case Study

# Problem Statement: 
![activity_list](https://github.com/nuPURohit/Embedded_C_LTTS/blob/main/simulation/activity_list.png)
1. Button Sensor will check the passenger is sited or not
2. Temperature sensor works as :

ADC Value (Temp Sensor)| Output PWM
----------|----------
0-200 | 20% - 20 °C
210-500 | 40% - 25 °C
510-700 | 70% - 29 °C
710-1024 | 95% - 33 °C

3. Display CDD- CRO will give the temperature value by 
showing PWM.
4. Led Actuator shows the driver is sited 
5. Heater will check the heater button is ON.
6. Temp to CAN shows the value of temperature gone 
over protocol






## CI and Code Qaulity
|Build|CppCheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/nuPURohit/Embedded_C_LTTS/actions/workflows/compile.yml/badge.svg)](https://github.com/nuPURohit/Embedded_C_LTTS/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/nuPURohit/Embedded_C_LTTS/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/nuPURohit/Embedded_C_LTTS/actions/workflows/cppcheck.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/10cd058ec2254bddaba8d550296cadda)](https://www.codacy.com/gh/nuPURohit/Embedded_C_LTTS/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=nuPURohit/Embedded_C_LTTS&amp;utm_campaign=Badge_Grade)|



