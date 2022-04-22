#ifndef PWM_included
#define PWM_included


#include<avr/io.h>
#include<util/delay.h>

void initTimer1(void);
void pwmGen(uint16_t value);


#endif // PWM_included