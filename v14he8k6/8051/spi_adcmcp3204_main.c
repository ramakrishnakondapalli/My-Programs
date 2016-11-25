#include"P89V51Rx2.h"
#include"spi_adcmcp3204.h"
//#include"spi_adcmcp3204.c"
#include"UART.h"
 main()
{
float n;
     init_uart();
 //   init_lcd();
 /*    cmd_lcd(0x80);
     delay_ms(10);
     cmd_lcd(0x01); 	
	 delay_ms(10);	*/
  while(1)
  {
 //  uart_tx('N');
	n=read_adcmcp3204(0);
	   float_uart(n);
uart_tx('\n');
uart_tx('\r');

   //t=uart_rx();
   // char_lcd(t);
  // uart_tx(n+48);
  }

							   
}
