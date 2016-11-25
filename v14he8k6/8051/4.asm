;;subtract 1000 from 65535 and up[date the result in scratchpad area begining fromMSB to LSB
CSEG AT 0
MOV A,#0FFH
SUBB A,#0E8H
MOV 31H,A
MOV A,#0FFH
SUBB A,#03H
MOV 30H,A
END
