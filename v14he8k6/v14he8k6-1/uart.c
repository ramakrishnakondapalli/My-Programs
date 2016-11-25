#include <reg51.h>
#include "UART.h"
#include <stdlib.h>

char op,x[3],y[3];
int s,t,i;
  
main()
{
  
  InitUART();
  while(1)
  {
    UART_Str("\nEnter format:\n");
    UART_Str("\n operand1 operator operand2 :");
    for(i=0;i<=1;i++)
    {
       x[i]=UART_Rx();
       UART_Tx(x[i]);  
    }
    x[2]='\0';
    s=atoi(x);
    UART_Tx(' ');

    op=UART_Rx();
    UART_Tx(op);
    UART_Tx(' ');
    for(i=0;i<=1;i++)
    {
       y[i]=UART_Rx(); 
       UART_Tx(y[i]); 
    }
    y[2]='\0';
    t=atoi(y);

    UART_Tx('\n');
    switch(op)
    {
      case 'x': i=s*t;
				break;
      case '+': i=s+t;
				break;
	  case '-': i=s-t;
     		    break;
      case '/': i=s/t;
	            break;
      
    }
    UART_Int(i);
  }
  
} 
