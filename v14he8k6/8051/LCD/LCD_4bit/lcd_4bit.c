#include<reg51.h>
#define "delay.h"
  sbit rs=P0^1;
  sbit rw=P0^2;
  sbit en=P0^3;
  bit flag;
void write_lcd(unsigned dat)
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

void cmd_lcd(unsigned char cmd)
{
  lcd_data=(cmd&0xf0)|0x08; 
  lcd_data&=~(1<<3);
  lcd_data=((cmd&0x0f)<<4)|0x08; 
  lcd_data&=~(1<<3);
   delay_ms(2); 

}
void char_lcd(unsigned char ch)
{
  lcd_data=(ch&0xf0)|0x0a;
  lcd_data&=~(1<<3);
  lcd_data=((ch&0x0f)<<4)|0x0a);
  lcd_data&=~(1<<3);
  delay_ms(2);
}
void init_lcd(void)
{
   cmd_lcd(0x28);
   cmd_lcd(0x00);
   cmd_lcd(0x01);
   cmd_lcd(0x06);
   cmd_lcd(0x80);
}
.
