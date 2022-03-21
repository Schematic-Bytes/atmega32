/*
 * Cycle2_Exp3.c
 *
 * Created: 21-Mar-22 5:52:40 AM
 *  Author: AD-LAB
 */ 

#include <avr/io.h>
int main(void)
{
 char mynum[]= {-4,-3,-2,-1,0,+1,+2,+3,+4};
	 unsigned char z;
	 DDRB=0xFF;
	 for(z=0;z<=8;z++)
	 PORTB=mynum[z];
	 while(1);
	 return 0;
}