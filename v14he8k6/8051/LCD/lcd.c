#include<reg51.h>
#include"delay.h"

#define lcd_data P0
  sbit rs=P2^0;
  sbit rw=P2^1;
  sbit en=P2^2;
 void write_lcd(char dat)
 {


 lcd_data=dat;
    rw=0;
	en=1;
	delay_ms(2);
	en=0;
 }
 void cmd_lcd(char cmd)
 {
rs=0;
     write_lcd(cmd);
 
 }
 void char_lcd(char ch)
 {
 rs=1; 
   write_lcd(ch);
 }
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

 void str_lcd(char *s)
 {
   while(*s)
	   char_lcd(*s++);

 }

void int_lcd(unsigned int num)
{
	char a[5]={0};
	char i=0;
	if(num==0)
		char_lcd('0');
	else
	{
		while(num>0)
		{
			a[i++]=(num%10)+48;
			num/=10;
		}
		--i;
			for(;i>=0;i--)
			{
				char_lcd(a[i]);
			}
	}
} 
 
void float_lcd(float f)
{
  int i;
  unsigned char j;
  i=f;
   int_lcd(i);
   char_lcd('.');
   for(j=0;j<3;j++)
   {
      f=(f-i);
	  i=f;
	  int_lcd(i);

   }
}

void build_cgram(unsigned char *p,unsigned int n)
{
  unsigned char i;
  cmd_lcd(0x40);
  for(i=0;i<n;i++)
  {
    char_lcd(p[i]);
  }
  cmd_lcd(0x80);

}

