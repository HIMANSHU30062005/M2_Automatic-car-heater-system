# Report on Automatic Car Heater System
#
## Main purpose of this project is add a new feature in car 
## places where snow falls or temperature is less,that is around zero degree centigrade, people feel comfort if the car are warm while travelling.
## program is designed like Heater starts operation only if person is sitting inside the car and heater switch is closed.
## When both above conditions are true Temperature sensor starts sensing tempraure of car.
## If temperature is less than 25 deg PWM output drives the heater driver circuit.
## PWM output and temperature values are inversely proportional i,e lesser the temperature more value of PWM signal will drive the heater for different range of temperature values different PWM value signal is generated.
## when temperature rises above 25 deg,PWM signal will be 0(low).
## All this opeartion is automatic and also temperature range is transmitted to serial output
# ![image](https://user-images.githubusercontent.com/101429540/164722898-6ba1bcd9-5395-4d1a-a1ca-50486cc86e40.png)
