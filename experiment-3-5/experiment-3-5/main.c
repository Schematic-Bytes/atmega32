/*
 * experiment-3-5.c
 *
 * Created: 4/11/2022 6:50:22 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>
#include <stdio.h>


int main(void)
{
    unsigned char z;
	DDRB=0;
	DDRD=0xff;
	while(1){
		z=PINB;
		z &= 0b00000011;
		
		printf("%c", z);
		switch(z){
			case 0: 
				PORTD = '0'; break;
			case 1:
				PORTD = '1'; break;
			case 2:
				PORTD = '2'; break;
			case 3:
				PORTD = '3'; break;
		}}
		return 0;
}

