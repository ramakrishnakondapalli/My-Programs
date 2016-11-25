#ifndef SPI_H
#define  SPI_H

/* Type declarations */
#include"tyes.h"
//****CHIP SELECTION  ***//
sbit cs=P1^4;

extern void init_SPI(void);
extern u8 SPI(u8 dat);
extern void CMD_2515(u8 CMD);
extern u8 BR_2515(u8 addr);
extern void modify_2515(u8 addr,u8 mask,u8 ch);
extern void BW_2515(u8 addr,u8 ch);


#endif
