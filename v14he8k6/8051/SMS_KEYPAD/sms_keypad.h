
#ifndef keypad_h
#define  keypad_h

#include<reg51.h>

#define lcd_data P2

extern void init_lcd(void);
extern void cmd_lcd(char );
extern void write_lcd(char );
extern void str_lcd(char *);
extern void char_lcd(char );
extern bit colscan();
extern unsigned char rowcheck();
extern unsigned char colcheck();
extern char keyscan();
extern void delay_ms(unsigned int);

sbit led=P0^2;
 sbit rs=P0^5;
 sbit rw=P0^6;
 sbit en=P0^7;

sbit c0=P3^0;    sbit r0=P3^4;
sbit c1=P3^1;    sbit r1=P3^5;
sbit c2=P3^2;    sbit r2=P3^6;
sbit c3=P3^3;    sbit r3=P3^7;

#endif
