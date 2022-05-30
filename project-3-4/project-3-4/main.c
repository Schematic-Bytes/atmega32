/*
 * project-3-4.c
 *
 * Created: 4/4/2022 5:28:39 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>
#define LED 7
#define SENSOR 1


int main(void)
{
   partd();
}

void parta(){
	DDRB = 0b11111101;
	DDRC = 0b10000000;
    while (1) 
    {
		if(PINB & 0b00000010)
			PORTC = PORTC | 0b10000000;
		else
			PORTC = PORTC & 0b01111111;
    }
}

// PART B

void partb(){
	DDRB = 0b11111101;
	DDRC = 0b10000000;
	while(1){
		if(PINB & 0b00000010)
			PORTC |= 0b10000000;
		else
			PORTC &= 0b01111111;
	}
}

// PART C

void partc(){

	DDRB = DDRB & ~(1<<1);
	DDRC = DDRC | (1<<7);
	while(1){
		if(PINB & (1<<1))
			PORTC = PORTC | (1<<7);
		else
			PORTC = PORTC & ~(1<<7);
	}
}

void partd(){

	
	DDRB &= ~(1<<SENSOR);
	DDRC |= (1<<LED);
	
	while(1){
		if (PINB & (1<<SENSOR))
			PORTC |=  (1<<LED);
		else
			PORTC &= ~(1<<LED);
	}
}