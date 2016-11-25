/*#include<reg51.h>
#include"delay.h"

#define lcd_data P2

  sbit rs=P0^1;
  sbit rw=P0^2;
  sbit en=P0^3;
  bit flag;

code unsigned char cgram_lut[8]={0x1d,0x05,0x05,0x1f,0x14,0x14,0x17,0x00};
extern void writeln_lcd(unsigned );
extern void writeun_lcd(unsigned );
extern void cmdun_lcd(unsigned char );
extern void cmdln_lcd(unsigned char );
extern void charln_lcd(unsigned char );
extern void charun_lcd(unsigned char );*/

#include<reg51.h>
  sbit rs=P0^1;
  sbit rw=P0^2;
  sbit en=P0^3;
  bit flag;
extern void init_lcd(void);
extern void delay_ms(unsigned int );
extern void build_cgram(unsigned char ,unsigned char );

//code unsigned char cgram_lut[8]={0x1d,0x05,0x05,0x1f,0x14,0x14,0x17,0x00};

main()
{

  init_lcd();
 // build_cgram(cgram_lut,8);
  charln_lcd('K');
  //cmd_lcd(0xc0);
  //str_lcd("ramaklrishna");
  while(1);
   


}
