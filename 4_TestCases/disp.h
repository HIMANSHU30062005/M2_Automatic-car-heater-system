#ifndef disp_included
#define diap_included

#include<avr/io.h>
#include<util/delay.h>

void USARTinit(uint16_t );
void USARTwriteChar(char );
void displayTemp(uint16_t );

#endif // disp_included