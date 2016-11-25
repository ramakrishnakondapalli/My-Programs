#include"utility.h"
bdata char x;
sbit b0=x^0;
sbit b1=x^1;
sbit b2=x^2;
sbit b3=x^3;
sbit b4=x^4;
sbit b5=x^5;
sbit b6=x^6;
sbit b7=x^7;
bit t;
void rev_bits2(u8 dat)
{
 x=dat;
 t=b7; b7=b0; b0=t;
 t=b6; b6=b1; b1=t;
 t=b5; b5=b2; b2=t;
 t=b4; b4=b3; b3=t;
}
