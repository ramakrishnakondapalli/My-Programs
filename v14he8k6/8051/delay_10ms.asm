
$include(delay_1ms.asm)
delay2 segment code
rseg delay2

delay_10ms:
mov r5,#09;1mc
l3:
acall delay_1ms;9*1ms=9ms
djnz r5,l3     ;2*9=18mc
mov r7,#250    ;1mc
l4:
djnz r7,l4      ;2*250=500mc
mov r5,#228     ;1mc
l5:
djnz r5,l5      ;2*228=456mc
ret             ;2mc 