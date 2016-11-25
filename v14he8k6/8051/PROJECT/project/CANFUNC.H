#ifndef CAN_H
#define CAN_H

#include"Headers.h"
//Status Register bits
#define SPIF(1<<7)  //Data Transfer

//*** SPI INITIALISATION FUNCTIONS  ****//

void init_SPI(void)
{

   SPCTL =0X50;  //SPI master WITH mode 0,MSB first,Fosc/4 as clock rate
   cs=deselect;


}
//****SPI TRANSFER FUNCTION DEFINITION ****//

u8 SPI(u8 dat)
{
  SPCFG&=oxo7;     //clearing SPIF flag
  SPDAT=dat;       //load spi tx reg
  while(!(SPCFG&SPIF));  //wait for transmission to complete
  return(SPDAT);
}

//Function to send the command to the MCP2515
void CMD_2515(u8 CMD)
{
  cs=select;   //MAKE THE CS PIN LOW TO SELECT MCP2515
  SPI(CMD);    //writing the command to MCP2615
  cs=deselect;  //MAKE THE CS PIN HIGH TO RELEASE THE MCP2515
}

//MODIFY FUNCTION DEFINITION 
void modify_251(u8 addr,u8 mask,u8 ch)
{
  cs=select;
  SPI(CMD_MODIFY);
  SPI(addr);
  SPI(mask);
  SPI(ch);
  cs=deselect;
}

//***WRITE BYTE TO MCP2515 ****//
void BW_2515(u8 adr,u8 ch)
{
  cs=select;
  SPI(CMD_WRITE);
  SPI(addr);
  SPI(ch);
  cs=deselect;
}

//***READ BYTE FROM MCP2515*****//

u8 BR_2515(u8 addr)
{
  u8 ch;
  cs=select;
  SPI(CMD_READ);
  SPI(0xff);
  cs=deselect;
  return(ch);


}
