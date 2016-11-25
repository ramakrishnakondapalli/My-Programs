#include"headers.h"
sbit sel1=P1^0;
sbit sel2=P1^1;
sbit sel3=P1^2;
sbit sel4=P1^3;
#define seg  P0
code char LUT[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
char dp1=0xff,dp2=0xff,dp3=0xff,dp4=0xff;
void displ_mux_seg(unsigned int i)
{
  seg=LUT[i/1000]&dp1;
    sel1=0;
	delay_ms(1);
     sel1=1;
  seg=LUT[(i/100)%10]&dp2;
    sel2=0;
	delay_ms(1);
     sel2=1;
  seg=LUT[(i/10)%10]&dp3;
    sel3=0;
	delay_ms(1);
     sel3=1;
   seg=LUT[i%10]&dp4;
    sel4=0;
	delay_ms(1);
     sel4=1;

}
/*void dispf_mux_seg(float f)
{
unsigned int i;
if((f>0.0)&&(f<10.0))
 {
   dp1=0x7f;
    f=f*1000;
	displ_mux_seg(i);
}
else if((f>10.0)&&(f<100.0))
{
   dp2=0x7f;
   f=f*100;
   i=f;
   displ_mux_seg(i);
}
else if((f>100.0)&&(f<1000.0))
{
   dp3=0x7f;
   f=f*10;
   i=f;
   displ_mux_seg(i);
}

//dp1=0xff;dp2=0xff;dp3=0xff;
}*/
