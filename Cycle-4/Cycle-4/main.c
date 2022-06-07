/*
 * Cycle-4.c
 *
 * Created: 07-06-2022 12:10:03
 * Author : AD-LAB
 */ 

#include <avr/io.h>

void exp1(){
	unsigned char x, y;
	unsigned char mybyte = 0x29;
	DDRB = DDRC = 0xFF;
	x = mybyte & 0x0F;
	PORTB = x | 0x30;
	y = mybyte & 0xF0;
	y = y >> 4;
	PORTC = y | 0x30;
	return 0;
}

void exp2()
{
	unsigned char bcdbyte;
	unsigned char w = '4';
	unsigned char z = '7';
	DDRB = 0xFF;
	w = w & 0x0F;
	w = w << 4;
	z = z & 0x0F;
	bcdbyte = w | z;
	PORTB = bcdbyte;
	return 0;
}

void exp3()
{
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

int main(){
	exp1();
}

