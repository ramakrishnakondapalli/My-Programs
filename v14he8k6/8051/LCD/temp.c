#include<reg51.h>
#define lcd P2

sbit rs=P0^0;
sbit rw=P0^1;
sbit en=P0^2;

void init_lcd(void);
void cmd_lcd(unsigned char );
void disp_lcd(unsigned char );
void write_lcd(unsigned char );
void delay_ms(unsigned int );
void char_lcd(unsigned char );
void int_lcd(unsigned int);
  
void init_lcd(void)
{

	cmd_lcd(0x02);
	cmd_lcd(0x38);
	cmd_lcd(0x06);
	cmd_lcd(0x0e);
	cmd_lcd(0x01);  //clears previous display if pret
	cmd_lcd(0x80);   //cursor present at beginnng of 1st line
	//delay_ms(10);
}

void cmd_lcd(unsigned char cmd)
{
	rs=0;
	write_lcd(cmd);
}

void disp_lcd(unsigned char cmd1)
{
	rs=1;
	write_lcd(cmd1);
}

void write_lcd(unsigned char cmd2)
{
	lcd=cmd2;
	rw=0;
	en=1;
	en=0;
	delay_ms(2);
}

void delay_ms(unsigned int dly)
{
	unsigned char i;
	for(;dly>0;dly--)
	{
		for(i=250;i>0;i--);
		for(i=232;i>0;i--);
	}
}

void str_lcd(unsigned char *p)
{
    while(*p)
     disp_lcd(*p++);
}

void int_lcd(unsigned int num)
{
  int a[10],j=0; 
  while(num>0)
   {
      a[j++]=(num%10)+48;
      num/=10;
	}
for(--j;j>=0;j--)
   disp_lcd(a[j]);
}

main()
{
	init_lcd();
//	int_lcd(1234);
//	cmd_lcd(0xc0);
 //   disp_lcd('K');
//for(k=0;k<10;k++)
{
	//disp_lcd(k+48);
	//delay_ms(1000);
     str_lcd("ramakrishna"); 
     cmd_lcd(0xc0);
     str_lcd("kondapalli");
     cmd_lcd(0x0F);     //cursor blinking
     //cmd_lcd(0x06);
   
}
	while(1);
}
