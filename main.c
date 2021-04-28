/**
 * @file main.c
 * @author nuPURohit (https://github.com/nuPURohit/Embedded_C_LTTS.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

#include"./inc/activity1.h"
#include"./inc/activity2.h"

int main(void)
{
    activity1();
    
    uint16_t value = 0;
    
	while(1)
    {   {
            if  ( (!(PIND & (1<<PD2))) & (!(PIND & (1<<PD4))) )
            {
                PORTD |= (1<<PD3);  //TURN ON LED
            }
            else
            {
                PORTD &= ~(1<<PD3); //TURN OFF LED
            }
        }
        
        if(!(PIND&(1<<PD4))!=0)
        {
            value = activity2(0);/* Read ADC channel 0 */
        }

    }

    return 0;
}