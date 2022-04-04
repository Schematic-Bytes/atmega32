/*
 * program-3-1.c
 *
 * Created: 4/1/2022 10:18:47 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    DDRB = 0xFF;
	DDRC = 0xFF;
	
	PORTB = 0x35 & 0x0f;
	PORTC = 0x04 | 0x68;
	PORTD = 0x54 ^ 0x78;
	PORTB = ~0x55;
    while (1);
	return 0;
}

