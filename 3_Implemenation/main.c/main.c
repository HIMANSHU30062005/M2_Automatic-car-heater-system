#include"adc.h"
#include"led.h"
#include"pwm.h"
#include"disp.h"

{
    peripheral_init();  
    initAdc();          
    initTimer0();       
    initTimer1();       
    USARTinit(99);     

    uint16_t temp = 0;

    while(1)
    {
        if(l_Switch())                
        {
            l_State(LED_ON);           
            temp = readAdc(10);          
            _delay_ms(100);
            pwmGen(temp);               
            displayTemp(temp);         
        }
        else{
        l_State(LED_OFF);        
            _delay_ms(100);
        }
    }

    return 0;         
}