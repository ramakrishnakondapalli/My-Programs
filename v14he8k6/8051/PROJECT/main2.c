#include"headers.h"

main()
{
 u8 r1=0x01;
 u8 r2=0x02;
 init_CANCONTROLLER();
 while(1)
 {
  while(IS_ANYKEYPRESSED);
  if(IS_KEY1PRESSED)
   CANframe_Tx(&r1,0,MESSAGE_ID1,1);
  if(IS_KEY2PRESSED)
   CANframe_Tx(&r2,0,MESSAGE_ID2,1);
 }	
 return 0;								  
}