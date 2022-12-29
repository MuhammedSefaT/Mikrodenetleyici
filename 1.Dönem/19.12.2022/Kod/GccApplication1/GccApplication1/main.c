#define F_CPU 1600000
#include <avr/io.h>


int main(void)
{
	DDRB = 0b00000101; //0 giriþ / 1 çýkýþ
	while (1)
	{
		if (!(PINB&0b00001000))
		{
			PORTB=PORTB&0b11111110;
		}
		else{
			PORTB = PORTB | 0b00000001;
		}
		
		if (!(PINB&0b00001000))
		{
			PORTB=PORTB&0b11111011;
		}
		else{
			PORTB = PORTB | 0b00000100;
		}
		
		
		
		
		//if (!(PINB&0b11110111))
		//{
		//PORTB = PORTB&0b11111011;
		//}
		//else
		//{
		//PORTB = PORTB | 0b00000001;
		//}
	}
}

