#include<reg51.h>
#include"delay.c"
#include"mcp3204.h"
main()
{
   init_lcd();
    while(1)
    {
      cmd_lcd(0x80);
      float_lcd(read_adc_mcp3204(0));

      cmd_lcd(0x80);
      float_lcd(read_adc_mcp3204(1));

     cmd_lcd(0x80);
      float_lcd(read_adc_mcp3204(2));

     cmd_lcd(0x80);
      float_lcd(read_adc_mcp3204(3));


    }




}
