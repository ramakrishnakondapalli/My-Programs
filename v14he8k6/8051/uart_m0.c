#include<reg51.h>
#include"types.h"
#include"utility.c"
sbit pl=P3^2;
void init_uart()
{
//uart mode 0,receiver enabled,ren=1
SCON=0x10;
}
u8 uart_rx_read74hc165()
{
   //u8 x;

  pl=0;//make low to load parallel input
  pl=1;//Must reset for next load but before reading
  while(!RI);//wait untill serially received
  
  RI=0;
  rev_bits2(SBUF);
  
  return x;
}

