#include<reg51.h>
#include"sms_keypad.h"

code unsigned char keypad[4][4][4]={
                                     {  {'7','8','9','%'},{'4','5','6','*'},{'1','2','3','-'},{'0','0','=','+'}
									 },

									 {  {'a','d','g',' '},{'j','m','p',' '},{'s','v','y',' '},{' ',' ',' ',' '}
									 },

                                     {  {'b','e','h',' '},{'k','n','q',' '},{'t','w','z',' '},{' ',' ',' ',' '}
									 },

                                     { {'c','f','i',' '},{'l','0','r',' '},{'u','x',' ',' '},{' ',' ',' ',' '}
									 }
                                    };

char presskey,khcount;


bit colscan()
{
    
return (c0&c1&c2&c3);
}

unsigned char rowcheck()
{
   r0=0;r1=r2=r3=1;
   if(!colscan())
     return 0;
	  r1=0;r0=r2=r3=1;
   if(!colscan())
        return 1;
   r2=0;r0=r1=r3=1;
      if(!colscan())
        return 2;
	 r3=0;r1=r2=r0=1;
    if(!colscan())
	  return 3;

}

  unsigned char colcheck()
  {
     if(c0==0) return 0;
	 else if(c1==0)  return 1;
	 else if(c2==0)  return 2;
	 else if(c3==0)  return 3;

  }
 char keyscan()
 {
  unsigned char row,col,prow,pcol;
   row=rowcheck();
   col=colcheck();
   if(row!=prow)
   {
     khcount=0;
     prow-=prow;
   }
   if(col!=pcol)
   {
     khcount=0;
     pcol=col;
   }

return keypad[khcount][row][col];
 }
