
//#define lcd P0
 /*
  sbit rs=P2^0;
  sbit rw=P2^1;
  sbit en=P2^2;
   void char_lcd(unsigned char n)
	   {
			 rs=1;
          write_lcd(n);
	   }
	void int_lcd(unsigned int n)
	  {
	    unsigned char a[5]={0};
		char i=0;
		 if(n==0)
		 {  char_lcd('0');
			return;
		 }
		 else
		  {
		   while(n>0)
		   {
			a[i]=(n%10)+48;
			n=n/10;
			i++;
 		   }
		   for(--i;i>=0;i--)
		     {
			  char_lcd(a[i]);
			 }
		  }
	  }
  
  void float_lcd(float f)
  {
	   unsigned int i;
	   unsigned char j;
	   i=f;
	   int_lcd(i);
	   char_lcd('.');
	   for(j=0;j<3;j++)
	   {	i=f-i;
	        i=f*10;
          int_lcd(i);
	   }
   }
 void init_lcd(void)
{
	cmd_lcd(0x02);
	delay_ms(10);
	cmd_lcd(0x38);
	 delay_ms(10);
	cmd_lcd(0x0e);
	  delay_ms(10);
	cmd_lcd(0x06);
	  delay_ms(10);
	cmd_lcd(0x01);
	  delay_ms(10);
	cmd_lcd(0x80);
	delay_ms(10);
}
void cmd_lcd(unsigned char cmd)
{
	rs=0;
	write_lcd(cmd);
}
 void delay_ms(unsigned char i)
 {
  unsigned char j;
  for(i;i>0;i--)
     for(j=120;j--;j++);
  }
  */
    /*
void write_lcd(unsigned char cmd2)
{
	lcd=cmd2;
	rw=0;
	en=1;
	en=0;
	delay_ms(2);
}
	*/ 



