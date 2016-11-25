cseg at 0
 MOV DPTR,#30H
 MOV a,#3BH
 mov 30h,a
mov 31h,a
mov 32h,a

/* 2nd method
mov r0,#30h
mov @r0,a
inc r0
mov @r0,a
inc r0
mov @r0,a
*/

/* 3rd method
  ;MOV A,#00H
 ;MOVc A,@A+DPTR
 ;MOV A,@R0
 ;MOV R0,#01H
 ;MOVc A,@A+DPTR
 ;MOV A,@R0
 ;MOV R0,#02H
 ;MOVc A,@A+DPTR
 ;MOV A,@R0
 
 
END*/
END

