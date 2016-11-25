///*********************CAN_FUNC.C******************************//
#include"Headers.h"

char flag;

//structure to hold the ID and Data for Transmitting

struct _TXBX_Buffer
{
  u8 IS_RTR;     //REMOTE TRANSMIT BIT
  u16 TX_ID;     //ID
  u8  TX_Len;    //TO hold the data length
  u8 TXBnD0;     //to hold the data length
  u8 TX_Data[8];
}TXBX_Buffer;

//structure to hold the ID and data for receive data

struct _RXBX_Buffer
{
  u8 IS_RTR;   //Remote Transmit Bit
  u16  RX_ID;  //ID
  u8   RX_Len; //TO hold the data length
  u8 RXBnD0;   //TO hold the data length
  u8 RX_Data[8];

}RXBX_Buffer;

//**********ISR ROUTINE************//

void EXTINT0(void )interrupt  0
{
   flag=1;
   IE=0;//clear interrupt
}

//INTERRUPTS INITIALISATION FUNCTION *****//
void init_ext(void)
{
   IEN0=0x81;
   IT0=1;     /./falling edge triggering

}

//delay routine for MCP2515 After Reset 
void RSTDelay_CONTROLLER(void)
{
   u8 i;
   for(i=70;i>0;i--);  //delay for 140us
}

//CAN CONTROLLER INITIALISATION
void init_CANCONTROLLER(void)
{
  u8 Test_Char;
  init_SPI();   //SPI PORT INITIALISATION
  init_ext();   //EXTERNAL INTERRUPT INITIALISATION

  CMD_2515(CMD_RESET);  //sending the RESET Command to the MCP@%!%
  RSTDelay_CANCONMTROLLER();  //reset delay
  //seting the MCP2515 in the CONFIGURE MODE
  modify_2515(CANCTRL,MODE_MASK,MODE_BITS);
  modify_2515(CANCTRL,CLK_MASK,CLK_BITS);
  //setting the configuration bits based on bit timing

  BW_2515(CNF1,BRP_BITS);
  BW_2515(CNF2,CONFIG_PSPH1);
  BW_2515(CNF3,CONFIG_PH2);
  BW_2515(CANINTE,INT_ENABLE);    //enabling the interrupts

  //enabling the receive buffer controll registers

   BW_2515(RXB0CTRL,RxBuf0_Mode);
   BW_2515(RXB1CTRL,RxBuf1_Mode);
   modify_2515(BFPCTRL,RXINENABLE_MASK,RXPNENABLE);

   do
    {
      modify_2515(CANCTRL,MODE_MASK,MODE_LOOPBACK);
    // Set to Loop Back mode!!
	    Test_Char=BR_2515(CANSTAT);
         Test_Char&=MODE_MASK;
	}while(Test_Char!=MODE_LOOPBACK);

	modify_2515(CANCTRL,MODE_MASK,MODE_NORMAL);
}

//FUNCTION USED TO WRITE DATA TO BE TRANSMITTED TO mcp 2515
  void WrBuf_CANCONTROLLER(struct_TXBX_Buffer*TXBn_Buffer)
  {
    u8 Res,l,i;
	l=TXBn_Buffer->TX_Len;
	if(TXBn_Buffer->IS_RTR==1)
	        TXBn_Buffer->TX_Len|=0x40;  //set RTR Bit
			switch(TXBn_Buffer->TXBnD0)
			{
                case TXB0D0 :  BW_2515(TXB0SIDH,(u8)((TXBn_Buffer->TX_ID>>3)&0xff));
				               BW_2515(TXB0SIDH,(u8)((TXBn_Buffer->TX_ID<<5)&0xE0)); 
                               BW_2515(TXB0SIDH,(u8)((TXBn_Buffer->TX_Len)&0xff));
							    break;

                case TXB0D0 :  BW_2515(TXB1SIDH,(u8)((TXBn_Buffer->TX_ID>>3)&0xff));
				               BW_2515(TXB1SIDH,(u8)((TXBn_Buffer->TX_ID<<5)&0xE0)); 
                               BW_2515(TXB1SIDH,(u8)((TXBn_Buffer->TX_Len)&0xff));
							    break;
                case TXB0D0 :  BW_2515(TXB2SIDH,(u8)((TXBn_Buffer->TX_ID>>3)&0xff));
				               BW_2515(TXB2SIDH,(u8)((TXBn_Buffer->TX_ID<<5)&0xE0)); 
                               BW_2515(TXB2IDH,(u8)((TXBn_Buffer->TX_Len)&0xff));
							    break;

			}

			cs=select;
			if(l!=0)
			{
              Res=SPI(CMD_WRITE);
              Res=SPI(TXBn_Buffer->TXBnD0);
			  for(i=0;i<l;i++)   //writing data bytes
			    Res=SPI(TXBn_Buffer->TX_Data[i]);

			}

        cs=\deselect;
  }

  //CXAN TXION FUNCTION
  void CANframe_TX(u8 *p,u8 RTR,u16 MESSAGE_ID,U8 l)
  {
      TXBX_Buffer.TC_Len=1;
	  for(;l>0;l--)
	      TXBX_Buffer.TX_Data[l-1]=*(p+l-1);
          TXBX_Buffer.IS_RTR=RTR;
		  TXBX_Buffer.TX_ID=MESSAGE_ID;
		  TXBX_Buffer.TXBnD0=TXB0D0;
		  WrBuf_CANCONTROLLER(&TXBX_Buffer);
		  flag=0;

		   CMD_2515(CMD_RTS0);//COMMAND FOR REQUEST TO START CAN TX1ON
		   while(flag==0);  //writing for the data to be transmitted 
		   modify_2515(CANINTF,0XC0,0X00);//clearing the interrupts

  }

  //Function to read data received by the MCP2515 and update the _RXBX_Buffer
  void RdBuf_2515(struct_RXBX_Buffer*RXBn_Buffer)
  {
     u8 Res,Tmp_Buffer->RXBnCTRL,i;

	 if(RXBn_Buffer->RXBnD0==RXB0D0)
	 {
       RXBn_Buffer->RX_Len=BR_2515(RXB0DLC);
       Res=BR_2515(RXB0SIDH);
	   RXBn_Buffer->RX_ID=(int)Res*8;
       Res=BR_2515(RXB0SIDL);
	   Res>>=5;
	   Res&=0x07;
	   RXBn_Buffer->RX_ID+=Res;
	   Tmp_RXBnCTRL=BR_2515(RXB0CTRL);

	 }
    else
	  {
        RXBn_Buffer->RX_Len=BR_2515(RXB1DLC);
		Res=BR_2515(RXB1SIDH);
		RXBn_Buffer->RX_ID=(int)Res*8;
		Res=BR_2515(RXB1SIDL);
		Res>>=5;
		Res&=0x07;
		RXBn_Buffer->RX_ID+=Res;
		Tmp_RXBnCTRL=BR_2515(RXB1CTRL);
	  }
	  if(Tmp_RXBnCTRL& 0x08)
	   RXBn_Buffer->IS_RTR=1;
	  else
       RXBn_Buffer->IS_RTR=0;
    
  	   RXBn_Buffer->RX_Len&=0x0f;    //Get the actual length

	   if(RXBn_Buffer->IS_RTR==0)
	   {
          cs=0;
		  Res=SPI(CMD_READ);
		  Res=SPI(RXBn_Buffer->RXBnD0);
		  for(i=0;i<RXBn_Buffer->Rx_Len;i++)
		  {
              Res=SPI(0xff);
              RXBn_Buffer->RX_Data[i]=Res;
		  }
		  cs=1;



	   }
	   
}

//CAN RXING FUNCTION
u8 CAN_Rx(void)
{
   modify_2515(CANINTF,0x07,0x00);//clearing the interrupts
   while(flag==0);
   RXBX_Buffer.RXBnD0=RXB0D0;     //Reading the data received
   RdBuf_2515(&RXBX_Buffer);  //clearing the interrupts
   flag=0;
   if(RXBX_Buffer.IS_RTR==0)
       return(RTBX_Buffer.RX_Data[0]);


}
