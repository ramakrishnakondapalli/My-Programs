cseg at 0
mov p0,#0x00;1mc
acall delay_10ms;2mc
mov p0,#0xff
acall delay_1ms;2mc
sjmp $
delay_1ms:
mov r0,#250;1mc
djnz r0,$;2*250
mov r0,#247;1mc
djnz r0,$;2*247
ret;2mc
delay_10ms:;1mc
mov r1,#9;1mc
l: 
acall delay_1ms;9*1000
djnz r1,l;2*9=18
mov r1,#255;1mc
djnz r1,$;2*255
mov r1,#232;1mc
djnz r1,$;2*232
nop;1mc
ret;2mc
end
