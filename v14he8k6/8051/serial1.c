#include<reg51.h>

main()
{
  TMOD=0x02;
  TCON=0x05;
  TH1=0xFA;
  TR1=1;
  while(1)
  {
  SBUF='A';
  while(TI==0);
  TI=0;
  }



}
