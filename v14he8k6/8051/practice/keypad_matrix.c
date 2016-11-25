#define r0 P2^0    
#define c0 P2^4
#define r1 P2^1    
#define c1 P2^5
#define r2 P2^2    
#define c2 P2^6
#define r3 P2^3    
#define c3 P2^7
#define lcd P3
unsigned char keypad_lut[4][4]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
void init_keypad()
{
  r0=r1=r2=r3=0;  
  c0=c1=c2=c3=0; 

}
unsigned char keyscan()
{
  
  unsigned char row,col;
     row=r0|r1|r2|r3;
	 col=c0|c1|c2|c3;
	 while(!row_val);
    if(r0==0)
    {row=0;goto colcheck();}
	else if(r1==0)
	{row=1;goto colcheck();}
	else if(r2==0)
	{row=2;goto colcheck();}
	else if(r3==0)
	{row=3;goto colcheck();}


	void colcheck()
	{
      if c0==0
	    col=0;
	else if c1==0
	    col=1 ;
	else if c2==0
	    col=2 ;
	else if c3==0
 	    col=3 ;
   }

   return keypad_lut[row][col];
 }
/*void key_press()
{





}*/
void init_lcd()
{


   delay_ms(5);
 /*  cmd_lcd(0x30);
   delay_ms(3);
   cmd_lcd(0x30);
   cmd_lcd(0x30);
*/
   cmd_lcd(0x02);
   cmd_lcd(0x01);
   cmd_lcd(0x0c);
   cmd_lcd(0x06);
   cmd_lcd(0x38);
   cmd_lcd(0x80);
 

}

void cmd_lcd(unsigned char ch)
{
  rs=0;
  write_lcd(ch);
}
void write_lcd(unsigned char dat)
{
 lcd=dat;
    rw=0;
	en=1;
	delay_ms(2);
	en=0;
}
void char_lcd(unsigned char ch)
{
  rs=1;
  write_lcd(ch);

}



