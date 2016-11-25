cseg at 200h
mydata :db 34h,73h,02h,01h,0A8h,0FCh,0Fh,98h,74h,0A0h
cseg at 0
mov dptr,#mydata
movc a,@a+dptr
mov r0,a
l1:inc dptr
clr a
movc a,@a+dptr
jz l3
mov r1,a
subb a,r0
jc l1
jnc l2
l2:mov a,r0
xch a,r1
mov r0,a
sjmp l1
l3:
mov a,r0
clr psw.3
clr psw.4
mov r7,a
setb psw.3
mov r7,a
setb psw.4
mov r7,a
clr psw.3
mov r7,a
end
