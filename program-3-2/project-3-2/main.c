/*
 * project-3-2.c
 *
 * Created: 4/1/2022 10:35:45 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRB = 0xff;
    while (1) {
		PORTB = PORTB | 0b00010000;
		PORTB = PORTB & 0b11101111;
	}
	return 0;
	}

