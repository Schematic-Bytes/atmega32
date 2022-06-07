
#include <avr/io.h>


int exp1()
{
 unsigned char z;
 DDRB=0xFF;
 for (z=0; z<=255; z++)
 PORTB=z;
 return 0;
}


int exp2()
{
  DDRB=0xFF;
  PORTB=0xAA;
  unsigned char z;
  for(z=0;z<10;z++)
  PORTB=~PORTB;
  while (1);
  return 0;
}


int exp3()
{
 char mynum[]= {-4,-3,-2,-1,0,+1,+2,+3,+4};
	 unsigned char z;
	 DDRB=0xFF;
	 for(z=0;z<=8;z++)
	 PORTB=mynum[z];
	 while(1);
	 return 0;
}


int exp4()
{
  unsigned char myList[]="012345ABCD";
  unsigned char z;
  DDRB=0xFF;
  for(z=0;z<10;z++)
  PORTB=myList[z];
  while(1);
  return 0;
  }


int exp5()
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

int exp6()
{
  DDRC=0;
  DDRB=0xFF;
  DDRD=0xFF;
  unsigned char temp;
  while(1)
  {
	temp=PINC;
	if(temp<100)
	PORTB=temp;
	else
	PORTD=temp;
  }
  return 0;	
}

 int main()
{
	exp6();
}