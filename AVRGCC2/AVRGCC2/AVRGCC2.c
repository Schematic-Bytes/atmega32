/*
 * AVRGCC2.c
 *
 * Created: 21-Mar-22 5:21:19 AM
 *  Author: AD-LAB
 */ 

#include <avr/io.h>
int main(void)
{
	unsigned char z;
	DDRB=0xFF;
	for(z=0;z<255;z++)	PORTB=z;
	return 0;   
}  