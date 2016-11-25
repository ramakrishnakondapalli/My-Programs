$include(delay_10ms.asm)
;$include(delay_1ms.asm)
delay3 segment code
rseg delay3

delay_100ms:
mov r0,#09       ;1mc
l:
acall delay_10ms  ;9*10ms
djnz r0,l          ;2*9mc
mov r0,#09          ;1mc
s:
acall delay_1ms     ;1*9ms
djnz r0,s           ;2mc*9=18mc
mov r1,#255          ;1mc
djnz r1,$            ;2*255=510mc
mov r5,#224          ;1mc
djnz r5,$            ;2*224mc=448mc
ret                  ;2mc

