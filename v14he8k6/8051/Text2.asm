extrn code (delay_10ms,delay_1ms)
;cseg at 0
acall delay_10ms;2mc
sjmp $
d segment code;seg_name segment block
rseg d
;delay_1ms:
mov r0,#250
djnz r0,$
mov r0,#247
djnz r0,$
;ret;delay_10ms:
mov r1,#9
s:
acall delay_1ms
djnz r1,s
mov r1,#255
djnz r1,$
mov r1,#232
djnz r1,$
nop
;ret
end
