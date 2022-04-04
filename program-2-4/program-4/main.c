/*
 * program-4.c
 *
 * Created: 4/1/2022 10:00:14 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	unsigned char mylist[] = "012345ABCD";
	unsigned char z;
	
	DDRB = 0xFF;
	for(z=0; z<=10; z++)
		PORTB=mylist[z];
    while (1);
    return  0;
}

