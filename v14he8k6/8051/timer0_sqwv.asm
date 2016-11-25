;create a dutycycle of 50% on P1.5
#define led P1^5
MOV TMOD,#01
HERE:
MOV TL0,#00
MOV TH0,#0FFH
CPL led
ACALL DELAY
SJMP HERE
DELAY:
setb TR0
AGAIN:
JNB TF0,AGAIN
clr TR0
clr TF0
ret
 
end
