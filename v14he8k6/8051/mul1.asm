 cseg at 0
    	mov r4,#0xff
    	mov r5,#0xff
    	mov r6,#0xff
    	mov r7,#0xff
	acall mul_16

	mov dptr,#1000h
	mov a,r0
	movx @dptr,a
	inc dptr
	mov a,r1
	movx @dptr,a
	inc dptr
	mov a,r2
	movx @dptr,a
	inc dptr
	mov a,r3
	movx @dptr,a
	clr a
	jz L3
      
mul_16:
	mov a,r5
	mov b,r7
	mul ab
	mov r3,a
	mov r2,b

	mov a,r5
	mov b,r6
	mul ab
	add a,r2
	mov r2,a
	mov a,b
	add a,#00h
	mov r1,a
	mov a,#00h
	addc a,#00h
	mov r0,a

	mov a,r4
	mov b,r7
	mul ab
	add a,r2
	mov r2,a
	mov a,b
	addc a,r1
	mov r1,a
	mov a,#00h
	addc a,r0
	mov r0,a

	mov a,r4
	mov b,r6
	mul ab
	add a,r1
	mov r1,a
	mov a,b
	addc a,r0
	mov r0,a
	ret
L3:	
end