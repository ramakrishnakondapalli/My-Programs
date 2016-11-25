#include<reg51.h>
unsigned char myByte;
main()
{
 TMOD=0x20;
 TH1=0xFA; 
SCON=0x50;
   TR1=1;
  while(1)
  {
   while(RI==0);  
   myByte=SBUF;
     P1=myByte;
      //if(RI==0)
         RI=0;
  }

}
