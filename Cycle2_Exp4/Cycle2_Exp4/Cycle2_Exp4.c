/*
 * Cycle2_Exp4.c
 *
 * Created: 21-Mar-22 6:44:23 AM
 *  Author: AD-LAB
 */ 

#include <avr/io.h>

int main(void)
{
  unsigned char myList[]="012345ABCD";
  unsigned char z;
  DDRB=0xFF;
  for(z=0;z<10;z++)
  PORTB=myList[z];
  while(1);
  return 0;
 
  }