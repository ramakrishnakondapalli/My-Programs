#include<reg51.h>
//ROWS=LOW NIBBLE,COLS=UPPER NIBBLE
#define KEYPAD_PORT P3
code scan_codes[16]={0xee,0xde,0xbe,0x7e,
                      0xed,0xdd,0xbd,0x7d,
					   0xeb,0xdb,0xbb,0x7b,
					   0xe7,0xd7,0xb7,0x77};
void init_rows(void)
{
  KEYPAD_PORT=0xf0;
}
unsigned char keyscan(void)
{
  unsigned char i;
  init_rows();
  //detect any keypress
  while(KEYPAD_PORT==0xf0)
      //identify keypress
	  //identify row
	for(i=0;i<10;i++)
	{
	  KEYPAD_PORT=0xf0|scan_codes[i];
      if(KEYPAD_PORT==scan_codes[i])
	    {
           return i+1;
		 }
      }
}
//unsigned char keyscan(void);
main()
{
while(1)
{
  P2=keyscan();
}
}
