/*
 * GccApplication53.c
 *
 * Created: 5/30/2022 11:19:06 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
   	unsigned char x,binbyte, d1,d2,d3;
   	DDRB = DDRC = DDRD =0xFF;
   	binbyte = 0xFD;
   	x = binbyte / 10;
   	d1 = binbyte % 10;
   	d2 = x % 10;
   	d3 = x / 10;
   	PORTB = d1;
   	PORTC = d2;
   	PORTD = d3;
   	return 0;
}

