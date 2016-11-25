$include(delay_100ms.asm)
cseg at 0
mov r0,#0x00
back:
mov a,r0
mov p1,a
;acall delay_100ms
;mov r0,#0xff
;mov a,r0
;mov p1,a
;rl a

sjmp back
end
