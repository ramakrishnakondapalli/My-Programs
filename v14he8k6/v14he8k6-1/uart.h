extern void Init_UART(void);
extern void UART_Tx(char);
extern char UART_Rx(void);
extern void UART_Str(char *);
extern void UART_Int(char *);



char buff1[20];
char buff2;


void Init_uart()
{
   SCON = (0x50|0xc0|0x08);	
   TMOD = 0x20; 
   TH1  = -3;
   TR1  = 1; 
}

void uart_tx(char c)
{
   SBUF=c;
   while(!TI);
   TI=0;
}


char uart_rx()
{
   while(!RI);
   RI=0;
   return SBUF;
}

/*
void uart_str(char *str) 
{
   while(*str)
   {
   		uart_tx(*str);
		str++;
   }
}
*/


/*
char * UART_Read()
{
   unsigned char i=0;
   
   while(1)
   {
      buff[i]=UART_Rx();
	  if(buff[i++]=='\r')
	     break; 
   }
   buff[--i]='\0';
   return buff;
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

UART_Float(float f)
{
  int x;
  float temp;
  x=f;
  UART_Int(x);
  UART_Tx('.');
  temp=(f-x)*1000;
  x=temp;
  UART_Int(x);
}
*/
  	


char buff1[20];
char buff2;



/*
char * UART_Read()
{
   unsigned char i=0;
   
   while(1)
   {
      buff[i]=UART_Rx();
	  if(buff[i++]=='\r')
	     break; 
   }
   buff[--i]='\0';
   return buff;
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

UART_Float(float f)
{
  int x;
  float temp;
  x=f;
  UART_Int(x);
  UART_Tx('.');
  temp=(f-x)*1000;
  x=temp;
  UART_Int(x);
}
*/
  	
