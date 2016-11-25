#include"lcd.h"
#include"delay.h"

main()
{
char k;
  init_lcd();
char_lcd('N');
for(k=0;k<10;k++)
{
char_lcd(k+48);
delay_ms(1000);
}
  while(1);
}
