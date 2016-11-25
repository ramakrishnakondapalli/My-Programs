#include"sms_keypad.h"
void init_lcd(void)
 {
   delay_ms(5);
 /*  cmd_lcd(0x30);
   delay_ms(3);
   cmd_lcd(0x30);
   cmd_lcd(0x30);
*/
   cmd_lcd(0x02);
   cmd_lcd(0x01);
   cmd_lcd(0x0c);
   cmd_lcd(0x06);
   cmd_lcd(0x38);
   cmd_lcd(0x80);
 }
void char_lcd(unsigned char dat)
{
   rw=0;
   write_lcd(dat);   

}
void cmd_lcd(char cmd)
 {
    rs=0;
     write_lcd(cmd);
 
}
void write_lcd(char ch)
{
   lcd_data=ch;
    rw=0;
	en=1;
	en=0;

}

 void str_lcd(char *s)
 {
   while(*s)
	   char_lcd(*s++);

}
void delay_ms(unsigned int i)
{
   unsigned int j;
    for(j=200;j>0;j--)
     {
      for(i;i>0;i--);
     }
}

