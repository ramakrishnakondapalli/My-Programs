#include<reg51.h>
#include"keypad_matrix.h"

main()
{
unsigned char keypad_val;
init_keypad();
init_lcd();
while(1)
{
   
  P3=keyscan();
  keypad_val=P3;
  char_lcd(keypad_val);

}


}
