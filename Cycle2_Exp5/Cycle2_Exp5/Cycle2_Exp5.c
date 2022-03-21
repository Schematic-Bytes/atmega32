/*
 * Cycle2_Exp5.c
 *
 * Created: 21-Mar-22 6:53:36 AM
 *  Author: AD-LAB
 */ 

#include <avr/io.h>
int main(void)
{
 unsigned char temp;
  DDRB=0x00;
  DDRC=0xFF;
  while(1)
  {
	temp=PINB;
	PORTC=temp;
	  
  } 
  return 0;
}