/*
 * GccApplication1.c
 *
 * Created: 03-06-2022 14:48:37
 * Author : AD-LAB
 */ 

#include <avr/io.h>
#define LED 7
#define SENSOR 1

int exp1()
{
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRB = 0xFF;
	DDRD = 0xFF;
	
	PORTB = 0x35 & 0x0f;
	PORTC = 0x04 | 0x68;
	PORTD = 0x54 ^ 0x78;
	PORTB = ~0x55;
	while (1);
	return 0;
}

int exp2()
{
	DDRB = 0xff;
	while (1) {
		PORTB = PORTB | 0b00010000;
		PORTB = PORTB & 0b11101111;
	}
	return 0;
}

int exp3()
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

void exp4_1(){
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

void exp4_2(){
	DDRB = 0b11111101;
	DDRC = 0b10000000;
	while(1){
		if(PINB & 0b00000010)
		PORTC |= 0b10000000;
		else
		PORTC &= 0b01111111;
	}
}

void exp4_3(){

	DDRB = DDRB & ~(1<<1);
	DDRC = DDRC | (1<<7);
	while(1){
		if(PINB & (1<<1))
		PORTC = PORTC | (1<<7);
		else
		PORTC = PORTC & ~(1<<7);
	}
}

void exp4_4(){
	
	DDRB &= ~(1<<SENSOR);
	DDRC |= (1<<LED);
	
	while(1){
		if (PINB & (1<<SENSOR))
		PORTC |=  (1<<LED);
		else
		PORTC &= ~(1<<LED);
	}
}


int exp5(){
	unsigned char z;
	DDRB=0;
	DDRD=0xff;
	while (1){
		z=PINB;
		z=z&0b00000011;
		switch(z){
	    case(0):{
			PORTD=0;
			break;
		}
		case(1):{
			PORTD=1;
			break;
		}
		case(2):{
			PORTD=2;
			break;
		}
		case(3):{
			PORTD=3;
			break;
		}
		return 0;
	}
	}
}

int main(){
	exp4_1();
	return 0;
}
