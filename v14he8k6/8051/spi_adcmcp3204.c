#include"P89V51Rx2.h"
//#include"spi_adcmcp3204.h"

  sbit _cs=P1^4;
  sbit din=P1^5;
  sbit dout=P1^6;
  sbit clk=P1^7;
  unsigned char spi(unsigned char dat)
  {
	  SPCFG=0X00;
	  SPDAT=dat;
	  while(!SPCFG)	;
	return SPDAT;
  }

 float read_adcmcp3204(unsigned char chNo)
  {
  unsigned char byte0,byte1,byte2,adc_val=0;
    _cs=0;
	SPCTL=0x53;
    byte0=spi(0x06);
	byte1=spi(chNo<<6);
	byte2=spi(0x00);
	_cs=1;
	 	adc_val=((byte1&0x0f)<<8)|byte2;
	   return(adc_val*(5/4095));
  }	
 