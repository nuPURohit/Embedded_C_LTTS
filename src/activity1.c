/**
 * @file activity1.c 
 * @author nuPURohit (https://github.com/nuPURohit/Embedded_C_LTTS.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>

#include"../inc/activity1.h"

/**
 * @brief Port Initialization as input or output
 * 
 */
void activity1()
{
    DDRD &= ~(1<<PD2); //input pin Port D pin 2 (clear bit)
    DDRD &= ~(1<<PD4);  //input pin Port D pin 4 (clear bit)

    PORTD |= (1<<PD2);  //set bit
    PORTD |= (1<<PD4);  //set bit

    DDRD |= (1<<PD3);   //output pin Port D pin 3(set bit)

   
}