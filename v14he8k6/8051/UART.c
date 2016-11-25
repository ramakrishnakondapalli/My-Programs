#include"UART.h"
void init_uart(void)
  {
    //cfg urt for standard mode,recv enabled
	 SCON=0x50;
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
/*u8 uart_rx(void)
 {
   while(RI==0);
   RI=0;
   return SBUF;
 }*/
 	void int_uart(unsigned int n)
	  {
	    unsigned char a[5]={0};
		char i=0;
		 if(n==0)
		 {  uart_tx('0');
			return;
		 }
		 else
		  {
		   while(n>0)
		   {
			a[i]=(n%10)+48;
			n=n/10;
			i++;
 		   }
		   for(--i;i>=0;i--)
		     {
			  uart_tx(a[i]);
			 }
		  }
	  }
  
  void float_uart(float f)
  {
	   unsigned int i;
	   unsigned char j;
	   i=f;
	   int_uart(i);
	   uart_tx('.');
	   for(j=0;j<3;j++)
	   {	i=f-i;
	        i=f*10;
          int_uart(i);
	   }
   }
