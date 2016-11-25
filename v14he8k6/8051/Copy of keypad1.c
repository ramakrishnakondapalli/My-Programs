#include<reg51.h>
sbit r0=P3^0; sbit c0=P3^4;
sbit r1=P3^1; sbit c1=P3^5;
sbit r2=P3^2; sbit c2=P3^6;
sbit r3=P3^3; sbit c3=P3^7;
code unsigned char keypad_lut[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

bit colscan(void)
{
  return(c0&c1&c2&c3);
}
void init_rows(void)
{

  r0=r1=r2=r3=1;
}
void init_cols(void)
{
  c0=c1=c2=c3=1;
}
unsigned char keyscan(void)
{
  unsigned char row,col;
  init_cols();
  init_rows();
  while(colscan());//identify key presss
  //identify key press
  //identify row
  r0=0;r1=r2=r3=1;
  if(!colscan())
  {
    row=0;goto colcheck;
  }
  r1=0;r0=r2=r3=1;
  if(!colcheck())
   {
    row=1;goto colcheck;
   }
   r2=0;r0=r1=r3=1;
  if(!colcheck())
   {
    row=2;goto colcheck;
   }
   r3=0;r0=r1=r2=1;
  if(!colcheck())
   {
    row=3;goto colcheck;
   }
   colcheck:
         if(c0==0)  col=0;
	else if(c1==0)  col=1;
	else if(c2==0)  col=2;
	else if(c3==0)  col=3;
	return keypad_lut[row][col];

}
main()
{
while(1)
  {
    P2=keyscan();
  }

}
