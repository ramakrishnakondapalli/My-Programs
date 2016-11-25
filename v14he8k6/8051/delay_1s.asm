$include(delay_100ms.asm)
$include(delay_10ms.asm)
$include(delay_1ms)
mov r0,#09       ;1mc
l:
acall delay_100ms  ;9*100ms
djnz r0,l          ;2*9mc=18mc
mov r0,#09          ;1mc
s:
acall delay_10ms     ;10*9ms
djnz r0,s           ;2mc*9=18mc
mov r0,#09          ;1mc
s1:
acall delay_1ms     ;1*9ms
djnz r0,s1           ;9*2mc=18mc

mov r1,#255          ;1mc
djnz r1,$            ;2*255=510mc
mov r5,#214          ;1mc
djnz r5,$            ;2*214mc=428mc
nop                  ;1mc
ret                  ;2mc