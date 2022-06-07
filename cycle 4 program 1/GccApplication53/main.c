/*
 * GccApplication53.c
 *
 * Created: 5/30/2022 11:20:10 AM
 * Author : AD-LAB
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
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

