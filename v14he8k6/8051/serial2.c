#include<reg51.h>

main()
{
char s[3]="YES";  
unsigned char i;
 TMOD=0x20;
 TH1=0xFD;
 SCON=0x50;
 TR1=1;
  while(1)
  {
   for(i=0;i<2;i++)
   {
     SBUF=s[i];
     while(TI!=1);
      TI=0;
   }
  }
}
