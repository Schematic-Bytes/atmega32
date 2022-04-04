/*
 * project-5.c
 *
 * Created: 4/1/2022 10:06:04 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    unsigned char temp;
	DDRB = 0x00;
	DDRC = 0xff;
    while (1) 
    {
		temp = PINB;
		PORTC = temp;
    }
	return 0;
}

