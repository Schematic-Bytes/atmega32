;
; experiment-7.asm
;
; Created: 3/21/2022 6:33:25 AM
; Author : AD-LAB
;


; Replace with your application code
.INCLUDE "M32DEF.INC"

CBI DDRB, 2
LDI R16, 0XFF
OUT DDRC, R16
SBI DDRD, 3

AGAIN: 
	SBIS PINB, 2
	RJMP AGAIN
	LDI R16, 0X45
	OUT PORTC, R16
	SBI PORTD, 3
	CBI PORTD, 3
HERE:
	JMP HERE