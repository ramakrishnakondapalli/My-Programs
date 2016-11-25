#include"uart_m1.h"
#include<stdio.h>
#include<reg51.h>
sbit led_tx=P3^7;
sbit led_rx=P3^6;
u8 t; t='A';
void uart_tx_rxisr(void)interrupt  4
{
if(TI)
{
 led_tx=~led_tx;
}
if(RI)
{
led_rx=~led_rx;
  t=SBUF;
  RI=0;
}

}

main()
{

init_uart();
while(1)
{

uart_tx(t);
}


}
