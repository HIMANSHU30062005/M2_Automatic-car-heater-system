#ifndef adc_included
#define adc_included

#include<avr/io.h>
#include<util/delay.h>

void initAdc(void);
uint16_t readAdc(uint16_t channel);

#endif // adc_included