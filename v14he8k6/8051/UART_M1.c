#ifndef UART_M1_H
#define UART_M1_H
#include<reg51.h>
#include"types.h"
    #define BAUD 9600
    #define DOUBLE_BAUD 1
    #define XTAL 11.0592
    #define LOAD_VAL  256-(((XTAL/BAUD)/(12*32))*1000*1000)
#endif
void init_uart(void)
  {
    //cfg urt for standard mode,recv enabled
	 SCON=0x05;
	 //cfg Timer1,auto reload mode
	  
	 TMOD=0x20;
	 //Load val for req baud rate
       TH1=TL1=LOAD_VAL;
	  #ifdef STDIO_LIB
	    TI=1;
	  #endif
	  #if DOUBLE_BAUD>0
	  PCON|=0x80;   //set SMOD bit
      #endif

TR1=1;//start Timer1 to generate req baudrate
}
void uart_tx(u8 dat)
 {
   SBUF=dat;
   while(TI==0);
     TI=0;
 }
u8 uart_rx(void)
 {
   while(RI==0);
   RI=0;
   return SBUF;
 }

