;
; AssemblerApplication1.asm
;
; Created: 3/2/2020 10:43:48 PM
; Author : AD-LAB
;


; Replace with your application code
.INCLUDE "M32DEF.INC"
LDI R16,0XFF
OUT DDRA,R16
L1:LDI R16,0X55
OUT PORTA,R16
LDI R16,0XAA
OUT PORTA,R16
RJMP L1
