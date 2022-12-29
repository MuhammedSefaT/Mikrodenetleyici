/*
 * GccApplication3.c
 *
 * Created: 12.12.2022 15:15:22
 * Author : PC
 */ 
#define F_CPU 1600000
#include <avr/io.h>
#include <avr/delay.h>


int main(void)
{
	DDRB=0b00000110;
    /* Replace with your application code */
    while (1) 
    {
		if (!(PINB&0b0001000))
		{
			PORTB=PORTB&0b1111101;
		}
		else{
			PORTB = PORTB | 0b0000010;
		}
		if (!(PINB&0b0010000))
		{
			PORTB=PORTB&0b111011;
		}
		else
		{
			PORTB=PORTB | 0b0000100;
		}
    }
}

