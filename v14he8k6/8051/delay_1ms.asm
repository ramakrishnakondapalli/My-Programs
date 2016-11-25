
delay1 segment code
rseg delay1

delay_1ms:
mov r7,#250;1mc
l1:
djnz r7,l1;2*250
mov r6,#248;1mc
l2:
djnz r6,l2;2*248
ret        ;2mc

