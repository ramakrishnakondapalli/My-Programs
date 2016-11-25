				

#ifndef defines_h
#define defines_h

sbit cs= P1^4;
sbit key1= P2^7;
sbit key2= P3^7;
sbit LED1= P2^7;
sbit LED2= P3^7;

/* SWITCH defines */
#define IS_ANYKEYPRESSED  key1&key2
#define IS_KEY1PRESSED    key1==0
#define IS_KEY2PRESSED    key2==0

/* BULB status */
#define ON 				  1
#define OFF				  0

/* SPI defines */
#define select 			  0	   //for chip select
#define deselect 		  1

/* MCP2515 defines */
#define MESSAGE_ID1 	  0x001
#define MESSAGE_ID2 	  0x002

//** Defination file of MCP2515 registers and commands

#define	CMD_WRITE	0x02
#define	CMD_READ	0x03
#define	CMD_RESET	0xc0
#define	CMD_STATUS	0xa0
#define	CMD_MODIFY	0x05
#define	CMD_RTS0	0x81
#define	CMD_RTS1	0x82
#define	CMD_RTS2	0x84

//****************************************************
//****	FIRST PORTION : DEFINITION OF CONTROL REGS
//****************************************************

#define	CANSTAT			0x0E
#define	CANCTRL			0x0F
#define	BFPCTRL			0X0C
#define	TXRTSCTRL		0X0D
#define	CNF1			0x2A
#define	CNF2			0x29
#define	CNF3			0x28
#define	CANINTE			0x2B
#define	CANINTF			0x2C
#define	EFLG			0x2D
#define	TEC		    	0x1C
#define	REC		    	0x1D
#define	TXB0CTRL		0x30
#define	TXB1CTRL		0x40
#define	TXB2CTRL		0X50
#define	RXB0CTRL		0X60
#define	RXB1CTRL		0X70

//****************************************************
//****	SECOND PORTION : MASK & FILTER REGS
//****************************************************
#define	RXM0SIDH		0X20
#define	RXM0SIDL		0X21
#define	RXM0EID8		0X22
#define	RXM0EID0		0X23
#define	RXM1SIDH		0X24
#define	RXM1SIDL		0X25
#define	RXM1EID8		0X26
#define	RXM1EID0		0X27
#define	RXF0SIDH		0X00
#define	RXF0SIDL		0X01
#define	RXF0EID8		0X02
#define	RXF0EID0		0X03
#define	RXF1SIDH		0X04
#define	RXF1SIDL		0X05
#define	RXF1EID8		0X06
#define	RXF1EID0		0X07
#define	RXF2SIDH		0X08
#define	RXF2SIDL		0X09
#define	RXF2EID8		0X0A
#define	RXF2EID0		0X0B
#define	RXF3SIDH		0X10
#define	RXF3SIDL		0X11
#define	RXF3EID8		0X12
#define	RXF3EID0		0X13
#define	RXF4SIDH		0X14
#define	RXF4SIDL		0X15
#define	RXF4EID8		0X16
#define	RXF4EID0		0X17
#define	RXF5SIDH		0X18
#define	RXF5SIDL		0X19
#define	RXF5EID8		0X1A
#define	RXF5EID0		0X1B

//****************************************************
//****	THIRD PORTION : TRANSMIT IDs & BUFFER
//****************************************************
#define	TXB0SIDH		0X31
#define	TXB0SIDL		0X32
#define	TXB0EID8		0X33
#define	TXB0EID0		0X34
#define	TXB0DLC		0X35
#define	TXB0D0			0X36
#define	TXB0D1			0X37
#define	TXB0D2			0X38
#define	TXB0D3			0X39
#define	TXB0D4			0X3A
#define	TXB0D5			0X3B
#define	TXB0D6			0X3C
#define	TXB0D7			0X3D

//****		TRANSMIT BUFFER 1 ..

#define	TXB1SIDH		0X41
#define	TXB1SIDL		0X42
#define	TXB1EID8		0X43
#define	TXB1EID0		0X44
#define	TXB1DLC		0X45
#define	TXB1D0		0X46
#define	TXB1D1		0X47
#define	TXB1D2		0X48
#define	TXB1D3		0X49
#define	TXB1D4		0X4A
#define	TXB1D5		0X4B
#define	TXB1D6		0X4C
#define	TXB1D7		0X4D

//****		TRANSMIT BUFFER 2 ..

#define	TXB2SIDH		0X51
#define	TXB2SIDL		0X52
#define	TXB2EID8		0X53
#define	TXB2EID0		0X54
#define	TXB2DLC	       	0X55
#define	TXB2D0			0X56
#define	TXB2D1			0X57
#define	TXB2D2			0X58
#define	TXB2D3			0X59
#define	TXB2D4			0X5A
#define	TXB2D5			0X5B
#define	TXB2D6			0X5C
#define	TXB2D7			0X5D

//****************************************************
//****	FOURTH PORTION : RECEIVE IDs & BUFFER
//****************************************************
#define	RXB0SIDH		0X61
#define	RXB0SIDL		0X62
#define	RXB0EID8		0X63
#define	RXB0EID0		0X64
#define	RXB0DLC			0X65
#define	RXB0D0			0X66
#define	RXB0D1			0X67
#define	RXB0D2			0X68
#define	RXB0D3			0X69
#define	RXB0D4			0X6A
#define	RXB0D5			0X6B
#define	RXB0D6			0X6C
#define	RXB0D7			0X6D

//****		RECEIVE BUFFER 1 ...

#define	RXB1SIDH		0X71
#define	RXB1SIDL		0X72
#define	RXB1EID8		0X73
#define	RXB1EID0		0X74
#define	RXB1DLC			0X75
#define	RXB1D0			0X76
#define	RXB1D1			0X77
#define	RXB1D2			0X78
#define	RXB1D3			0X79
#define	RXB1D4			0X7A
#define	RXB1D5			0X7B
#define	RXB1D6			0X7C
#define	RXB1D7			0X7D

//******************************************************************
//****	RESET VALUE OF EACH CONTROL REGISTER !!
//******************************************************************
//	BFPCTRL		--00 0000
//	TXRTSCTRL	--XX X000
//	CANSTAT		100- 000-
//	CANCTRL		1110 -111
//	TEC			0000 0000
//	REC			0000 0000
//	CNF3		-0-- -000
//	CNF2		0000 0000
//	CNF1		0000 0000
//	CANINTE		0000 0000
//	CANINTF		0000 0000
//	EFLG		0000 0000
//	TXB0CTRL	-000 0-00
//	TXB1CTRL	-000 0-00
//	TXB2CTRL	-000 0-00
//	RXB0CTRL	-00- 0000
//	RXB1CTRL	-00- 0000
//******************************************************************
	
// DIFFERENT MODES IN WHICH MCP2515 CAN WORK

#define MODE_LOOPBACK     0X40
#define MODE_CONFIG       0x80
#define MODE_NORMAL       0x00
#define MODE_MASK         0xe0
#define CLK_BITS          0x05
#define CLK_MASK          0x07
#define BRP_BITS          0x01
#define RXPINENABLE       0x0f
#define RXPINENABLE_MASK  0x0f
#define INT_ENABLE        0x1f
#define RxBuf0_Mode       0x20
#define RxBuf1_Mode       0x20
#define CONFIG_PSPH1      0xf1
#define CONFIG_PH2        0xc5

#endif
