#include <stdio.h>
#include <intrins.h>
#include <reg51.h>

#define HIGH 1 //active high
#define LOW 0 //signal
#define TRUE 1 //active high state
#define FALSE 0 //active low state
#define ACK_READ 0x85
 
void i2c_stop (void);
void i2c_start (void);
void i2c_write (unsigned char);
void i2c_ACKpoll (void);
void i2c_slaveACK(void);
void convert (unsigned char);

sbit CLOCK = P0^0;
sbit DATA = P0^1 ;

bit flag;
void main (void)
{
      i2c_start();
      i2c_write(0xa0);
	  i2c_slaveACK();	
      i2c_write(0x10);
	  i2c_slaveACK();	
      i2c_stop();
	  i2c_ACKpoll(); 	
      i2c_start();
      i2c_write(0xa0);
      i2c_write(0x35);
	  i2c_stop();
      
}
void i2c_ACKpoll(void)
{
	unsigned char x=0x40;
    while(x>0)
    {
  		
        do
		{
          i2c_start();
	      i2c_write(ACK_READ);
		  i2c_slaveACK();
        }while(flag);
		x--;
      }
	i2c_stop();
}
    
void i2c_slaveACK(void)
{
   _nop_();
   _nop_();
	CLOCK=LOW;
	_nop_();
	DATA=HIGH;
	_nop_();
	_nop_();
	CLOCK=HIGH;
	_nop_();
	_nop_();
	_nop_();
	flag=DATA;	
	CLOCK=LOW;
}
void no_ACK(void)
{
 	DATA=HIGH;
	_nop_();
	CLOCK=HIGH;
	_nop_();
	CLOCK=LOW;
}	   

void i2c_start(void)
{
    CLOCK=HIGH;
    _nop_();
    DATA=HIGH;
    _nop_();
    DATA=LOW;
	_nop_();
    CLOCK=LOW;
}

void i2c_stop(void)
{
	  DATA=LOW;
	  _nop_();
      CLOCK=HIGH;
      _nop_();	
      DATA=HIGH;
}

void i2c_write(unsigned char j)
{
      unsigned char i;
	  
      for (i=0;i<8;i++)
      {
	   CLOCK=LOW; 		
       DATA=((j & 0x80)? 1:0);
       j<<=1;
       CLOCK=HIGH;
      }
 }
          
