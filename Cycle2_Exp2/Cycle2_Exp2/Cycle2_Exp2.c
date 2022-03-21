/*
 * Cycle2_Exp2.c
 *
 * Created: 21-Mar-22 5:46:56 AM
 *  Author: AD-LAB
 */ 

#include <avr/io.h>

int main(void)
{
  DDRB=0xFF;
  PORTB=0xAA;
  unsigned char z;
  for(z=0;z<10;z++)
  PORTB=~PORTB;
  while (1);
  return 0;
}