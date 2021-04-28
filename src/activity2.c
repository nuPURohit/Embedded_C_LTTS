/**
 * @file activity2.c
 * @author nuPURohit (https://github.com/nuPURohit/Embedded_C_LTTS.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"../inc/activity2.h"

void ADC_init()
{
    //    DDRA = 0x0;			/* Make ADC port as input */
	ADCSRA = 0x87;			/* Enable ADC, fr/128  */
	ADMUX = 0x40;			/* Vref: Avcc, ADC channel: 0 */
}

int activity2(char channel)
{
	uint8_t Ain_High=0, Ain_Low=0;
	uint16_t Ain=0;

	ADC_init();

	ADMUX = ADMUX|(channel & 0x0F);	/* Set input channel to read */

	ADCSRA |= (1<<ADSC);		/* Start conversion */
	while((ADCSRA&(1<<ADIF))==0);	/* Monitor end of conversion interrupt */

	//_delay_us(10);
	Ain_Low = (int)ADCL;		/* Read lower byte*/
	Ain_High = (int)ADCH*256;		/* Read higher 2 bits and
					Multiply with weight */
	Ain = Ain_High + Ain_Low;
	return(Ain);			/* Return digital value*/
}

