#include<reg51.h>
#include"sms_keypad.h"
//#include"sms_lcd.c"
//#include"sms_keypad.c"
// sbit led=P1^2;
void main()
{
  unsigned int dly,i;
   char pos=-1;
unsigned char presskey;
  int khcount;
  init_lcd();
    while(1)
     {
       khcount=-1;
        led=~led;
         for(dly=100;dly>0;dly--)
          {
             for(i=125;i>0;i--)
              {
                 r0=r1=r2=r3=0;
                  if(!colscan())
                   {
                      if(khcount==3)
                       {
                          khcount=-1;
                        }
                    else if(khcount==-1)
                      {
                         pos++;
                         if(pos>15)
                           {
                             cmd_lcd(0xc0);
                             str_lcd("             ");
                             cmd_lcd(0x60);
                              pos=0;
                           }
                      }
                    }
               khcount++;
               presskey=keyscan();
               cmd_lcd(0xc0+pos);
               write_lcd(presskey);
                while(!colscan()) 
                   i=125;dly=100;     


               }
          }
     }

}
  
