$include(delay_100ms.asm)
cseg at 0
l6:
mov p1,#0x00
acall delay_100ms
mov p1,#0xff
acall delay_100ms
sjmp l6
end
