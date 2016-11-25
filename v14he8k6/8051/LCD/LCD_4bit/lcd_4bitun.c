#include<reg51.h>
#include"delay.h"
#define  lcd_data  P2
  sbit rs=P0^1;
  sbit rw=P0^2;
  sbit en=P0^3;
   bit flag;
void writeun_lcd(unsigned char dat)
{
  lcd_data=(dat&0xf0);
  if(flag)
    rs=1;
    en=1;
    en=1;
    en=0;
    //lower nibble,rs=rw=en=0
   lcd_data=(dat&0x0f)<<4;
    if(flag)
      rs=1;
      en=1;
      en=0;
   delay_ms(2);
}

void cmdun_lcd(unsigned char cmd)
{
   flag=0;
   writeun_lcd(cmd);
}
void charun_lcd(unsigned char ch)
{

   flag=1;
  writeun_lcd(ch);
}

