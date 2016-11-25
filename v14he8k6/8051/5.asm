;;SWAP LSB AND MSB ONLY OFR7,OTHER BITS SHOULD NOT BE AFFECTED

mov r7,#24h
mov a,r7
anl a,#0feh
setb 

