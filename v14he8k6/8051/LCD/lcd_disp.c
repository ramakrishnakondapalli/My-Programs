#include<reg51.h>
#include"lcd.h"
/*#define lcd_data P0

sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;

void char_lcd(unsigned char);
void write_lcd(unsigned char);
void init_lcd(void);
void str_lcd(unsigned char *);
void int_lcd(unsigned int);
void float_lcd(float);
void delay_ms(unsigned char );
void build_cgram(unsigned char *,unsigned int);*/

code unsigned char cgram_lut[8]={0x1d,0x05,0x1f,0x14,0x14,0x17,0x00};

void write_lcd(unsigned char dat)
{


 lcd_data=dat;
    rw=0;
	en=1;
	en=0;
	delay_ms(2);
 }
 void cmd_lcd(unsigned char cmd)
 {
 rs=0;
   write_lcd(cmd);
 
 }
 void char_lcd(unsigned char ch)
 {
 rs=1;
   write_lcd(ch);
 }
 void init_lcd(void)
 {
   delay_ms(5);
   cmd_lcd(0x30);
   delay_ms(3);
   cmd_lcd(0x30);
   cmd_lcd(0x30);
   cmd_lcd(0x38);
   cmd_lcd(0x10);
   cmd_lcd(0x01);
   cmd_lcd(0x06);
   cmd_lcd(0x0f);
 }
 void str_lcd(unsigned char *s)
 {
   while(*s)
   char_lcd(*s++);
 }
 void int_lcd(unsigned int i)
 {
    unsigned char a[5]={0};
  	//char r i=0;
    int n,num;
    if(n==0)
	{
	  char_lcd('0');
	    return;
     }
	 else
	  {
        while(num>0)
		 {
           a[i]=(n%10)+48;
             n=n/10;
			 i++;
		 }
		 for(--i;i>=0;i--)
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
void delay_ms(unsigned int i)
{
	unsigned int j;
	for(;i>0;i--)
    {
		for(j=122;j>0;j--);

     }
} 
main()
{
  init_lcd();
  build_cgram(cgram_lut,8);
  char_lcd('0');
  char_lcd('0');
  str_lcd("krishna");
  while(1);
}
