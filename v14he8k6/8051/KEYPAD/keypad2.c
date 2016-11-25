#include<reg51.h>
//ROWS=LOW NIBBLE,COLS=UPPER NIBBLE
#define KEYPAD_PORT  P3
//code unsigned char keypad_lut[4][4]={0xee,0xde,0xbe,0x7e,0xed,0xdd,0xbd,ox7d,oxeb,oxdb,oxbb,ox7b,0xe7,0xd7,0xb7,0x77};
code unsigned char keypad_lut[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//code unsigned char Scan_codes[]={oxee,oxed,oxeb,oxe7};
code unsigned char Scan_codes[]={1,5,9,13};
bit colscan(void)
{
  if((KEYPAD_PORT&0xf0)!=0xf0)
     return 0;

}
void init_rows(void)
{
int r0,r1,r2,r3; 
r0=r1=r2=r3=1;
}
unsigned char key_scan(void)
{
  unsigned char row,col,i;
  init_rows();
  //detect any key press
  while(KEYPAD_PORT==0xfe)
    //identify key press
    //identify row
for(i=0;i<4;i++)
{
  KEYPAD_PORT=0xf0|Scan_codes[i];
if(!colscan())
  {  row=i;break;}
}
//identify column
for(i=0;i<4;i++)
{
  if((KEYPAD_PORT&0xf0)==Scan_codes[i]<4)
     {
       col=i;break;
	 }
   return keypad_lut[row][col];
}



}
