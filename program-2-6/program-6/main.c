/*
 * program-6.c
 *
 * Created: 4/1/2022 10:12:50 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    DDRC = 0;
	DDRB = 0xFF;
	DDRD = 0xFF;
	unsigned char temp;
	
	
    while (1) 
    {
		temp = PINC;
		if ( temp < 100 )
			PORTB = temp;
		else
			PORTD = temp;
    }
	return 0;
}

