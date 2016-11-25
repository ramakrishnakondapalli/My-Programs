//#include"UART.c"
//bdata u8 t _at_ 0x30;

#ifndef UART_M1_H
#define UART_M1_H
#include"P89V51Rx2.h"
#include"types.h"
    #define BAUD 9600
    #define DOUBLE_BAUD 0
    #define XTAL 11.0592*1000*1000
    #define LOAD_VAL    256-(((XTAL/BAUD)/(12*32)))
	extern void init_uart(void);
	extern void uart_tx(unsigned char);

	extern   void float_uart(float f);
	extern void int_uart(unsigned int n)	  ;

#endif