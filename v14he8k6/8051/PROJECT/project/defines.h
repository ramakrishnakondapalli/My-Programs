#ifndef DEFINES_H
#define  DEFINES_H

/*SWITCH DEFINES*/
#define IS_KEY1PRESSED  key1==0
#define IS_KEY2PRESSED  key2==0


/****SPI DEFINES*****/

#define select 0
#define deselect 1

/**MCP2515 DEFINES**/
#define MESSAGE_ID1 0x001
#define MESSAGE_ID2 0x002


//*******Definitions file of MCP@%!% registers & COMMANDS ******//

#define   CMD_WRITE  0x02
#define   CMD_READ   0x03
#define   CMD_RESET  0xc0
#define   CMD_STATUS 0xa0
#define   CMD_MODIFY 0x05
#define   CMD_RTS0   0x81
#define   CMD_RTS1   0x82
#define   CMD_RTS2   0x84

//**** FIRST PORTION: DEFINITION OF CONTROL  REGS  ****??

#define CANSTAT  0X0E
#define CANCTRL  0X0F
#define BFPCTRL  0X0C
#define TXRTSCTRL 0X0D
#define CNF1     0X2A
#define CNF2     0X29
#define CNF3     0X28
#define CANINTE  0X2B
#define CANINTF  0x2c
#define RXB0CTRL 0X60
#define RXB1CTRL 0X70

//****   THIRD PORTION:TRANSMIT IDs&BUFFER     **************//

#define TXB0SIDH   0X31
#define TXB0SIDL   0X32
#define TXB0DLC   0X35
#define TXB0D0    0X36
#define TXB0D1    0X37
#define TXB0D2    0X38
#define TXB0D3    0X39
#define TXB0D4    0X3A
#define TXB0D5    0X3B
#define TXB0D6    0X3C
#define TXB0D7    0X3D

//****   TRANSMIT  BUFFER 1   ***********//

#define  TXB1SIDH  0X41
#define  TXB1SIDL  0X42
#define  TXB1DLC   0x45
#define  TXB1D0    0X46
#define  TXB1D1    0X47
#define  TXB1D2    0X48
#define  TXB1D3    0X49
#define  TXB1D4    0X4A
#define  TXB1D5    0X4B
#define  TXB1D6    0X4C
#define  TXB1D7    0X4D

//*********  TRANSMIT BUFFER 2  **************//


#define  TXB2SIDH  0X51
#define  TXB2SIDL  0X52
#define  TXB2DLC   0x55
#define  TXB2D0    0X56
#define  TXB2D1    0X57
#define  TXB2D2    0X58
#define  TXB2D3    0X59
#define  TXB2D4    0X5A
#define  TXB2D5    0X5B
#define  TXB2D6    0X5C
#define  TXB2D7    0X5D


//****************   FOURTH PORTION :RECEIVED IDs  &  BUFFER  ********//

#define  RXB0SIDH  0X61
#define  RXB0SIDL  0X62
#define  RXB0DLC   0x65
#define  RXB0D0    0X66
#define  RXB0D1    0X67
#define  RXB0D2    0X68
#define  RXB0D3    0X69
#define  RXB0D4    0X6A
#define  RXB0D5    0X6B
#define  RXB0D6    0X6C
#define  RXB0D7    0X6D


//********  RECEIVE BUFFER 1

#define  RXB1SIDH  0X71
#define  RXB1SIDL  0X72
#define  RXB1DLC   0x75
#define  RXB1D0    0X76
#define  RXB1D1    0X77
#define  RXB1D2    0X78
#define  RXB1D3    0X79
#define  RXB1D4    0X7A
#define  RXB1D5    0X7B
#define  RXB1D6    0X7C
#define  RXB1D7    0X7D


//** DIFFERENT MODES IN WHICH THE MCP2515can work

#define  MODE_LOOPBACK   0X40
#define  MODE_CONFIG      0X80
#define  MODE_NORMAL     0X00
#define  MODE_MASK       0XE0
#define  CLK_BITS        0X05
#define  CLK_MASK         0X07
#define  BRP_BITS        0X01
#define  RXPINENABLE    0X0F
#define  RXPINENABLE_MASK 0X0F
#define  RxBUF0_MODE     0X20
#define  RxBUF1_MODE     0X20
#define  CONFIG_PSPH1    0XF1
#define  CONFIG_PH2      0XC5



#endif






