/*
 * experiment_6.asm
 *
 *  Created: 3/21/2022 6:19:33 AM
 *   Author: AD-LAB
 */ 


.INCLUDE "M32DEF.INC"
.ORG 00

LDI R18, HIGH(RAMEND)
OUT SPH, R18
LDI R18, LOW(RAMEND)
OUT SPL, R18
SBI DDRB, 2
LI:
	SBI PORTB, 2
	//CALL DELAY
	CBI PORTB, 2
	//CALL DELAY
	JMP LI
/*DELAY:
	LDI R16, 2
AGAIN:
	NOP
	NOP
	DEC R16

	BRNE AGAIN*/