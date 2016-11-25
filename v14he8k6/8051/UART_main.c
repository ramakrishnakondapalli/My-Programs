#include"UART_M1.c"
bdata u8 t _at_ 0x30;
main()
{
  init_uart();
  while(1)
  {
   t=uart_rx();
   uart_tx(t);
  }
}


