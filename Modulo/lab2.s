;
; lab2.s
;
;  Created on: Feb 10, 2020
;      Author: dazhouli



	.text
	.global div_and_mod

div_and_mod:
	STMFD r13!, {r2-r12, r14}
	; Your code for the signed division/mod routine goes here.
	; The dividend is passed in r0 and the divisor in r1.
	; The quotient is returned in r0 and the remainder in r1.

	MOV r3, #16	;counter=16
	MOV r4, #0	;Quotient=0
	MOV r0, #0x012C	;dividend
	MOV r1, #0x0015	;divisor

	MOV r8, #16
	LSL r1, r1, r8

	MOV r2, r0	;initilize remainder to dividend

again:	SUB r2, r2, r1	;Remainder=remainder-divisor
	CMP r2, #0x0
	BLT restore
	LSL r4, r4, #1		;left shift Quotient
	ORR r4, r4, #0x1		;LSB=1
rsd:	LSR r1, r1, #1
	;AND r1, r1, #0xFFFFEFFF	;right shift divisor
	CMP r3, #0			;MSB=0
	BLE	done
	SUB r3, r3, #1
	B again


restore:	ADD r2, r2, r1
	LSL r4, r4, #1		;Left shift quotient
	;AND r4, r4, #0xFFFFFFFE	;LSB=0
	B rsd

done:	MOV r0, r4	;Quotient to r0
	MOV r1, r2		;remainder to r1

	LDMFD r13!, {r2-r12, r14}
	MOV pc, lr
	.end


