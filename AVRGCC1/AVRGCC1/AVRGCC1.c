/*
 * AVRGCC1.c
 *
 * Created: 13-Mar-22 11:15:39 PM
 *  Author: AD-LAB
 */ 

#include <avr/io.h>

int main(void)
{
   unsigned char z;
   DDRB=0XFF;
   for (z=0;z<=255;z++)
   PORTB=z;
   return 0;
}