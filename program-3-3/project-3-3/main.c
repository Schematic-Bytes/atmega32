/*
 * project-3-3.c
 *
 * Created: 4/1/2022 10:42:19 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    DDRB = 0xff;
	DDRC = 0x00;
	
    while (1) 
    {
		if(PINC & 0b00100000)
			PORTB = 0x55;
		else
			PORTB = 0xAA;
    }
	return 0;
}

