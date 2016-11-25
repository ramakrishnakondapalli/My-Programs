#include<reg51.h>
#include"mcp3204.h"
sbit clk=P2^4;
sbit din=P2^5;
sbit dout=P2^6;
sbit _cs=P2^7;

float read_adc_mcp3204(unsigned char chno)
{
  char i;
  unsigned int adc_val=0;
  bit d1,d0;
  if(chno==0)
    {
     d1=d0=0;
    }
  else if(chno==1){d1=0;d0=0;}
  else if(chno==1){d1=1;d0=0;}
  else if(chno==3){d1=1;d0=1;}


  _cs=clk=din=dout=1;
  _cs=0;
  clk=0;clk=1;
  clk=0;clk=1;
  clk=0;clk=1;
  clk=0;din=d1;clk=1;
  clk=0;din=d0;clk=1;
  clk=0;clk=1;
  clk=0;clk=1;
  
   for(i=11;i>=0;i--)
   {
     clk=0;
      if(dout)
       adc_val=1<<i;
       clk=1;
   }
   _cs=1;
   return(adc_val*(5/4095));
}
