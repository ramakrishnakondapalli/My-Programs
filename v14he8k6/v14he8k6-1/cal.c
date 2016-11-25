#include<reg51.h>
//#include <reg51.h>
#include "uart.h"
#include <stdlib.h>
char op,x[3],y[3];
int s,t,i;
  
main()
{
  
  Init_UART();
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
  

void Init_UART()
{
   SCON = (0x50|0xc0|0x08);	
   TMOD = 0x20; 
   TH1  = -3;
   TR1  = 1; 
}

void UART_Tx(char c)
{
   SBUF=c;
   while(!TI);
   TI=0;
}


char UART_Rx()
{
   while(!RI);
   RI=0;
   return SBUF;
}


void UART_str(char *str) 
{
   while(*str)
   {
   		uart_tx(*str);
		str++;
   }
}
} 
void UART_Int(unsigned int n)
{
  unsigned char a[5];
  char i=0;
  if(n==0)
  {
    UART_Tx('0');
	return;
  }
  else
  {
     while(n>0)
	 {
	   a[i++]=(n%10)+48;
	   n=n/10;
	 }
	 --i;
	 for(;i>=0;i--)
	 {
	   UART_Tx(a[i]);
	 }
   }
}
