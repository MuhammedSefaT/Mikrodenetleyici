/*
 * GccApplication1.c
 *
 * Created: 5.12.2022 14:25:53
 * Author : PC
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0b00001100;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB = 0b00001100;
		_delay_ms(300);
		PORTB = 0b00000000;
		_delay_ms(300);
    }
}

