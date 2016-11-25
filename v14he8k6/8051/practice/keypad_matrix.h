#ifndef KEYPAD_MATRIX_H

#define KEYPAD_MATRIX_H

extern void init_keypad();
extern unsigned char keyscan();
extern void colcheck();
extern void init_lcd();
extern void cmd_lcd(unsigned char );
extern void write_lcd(unsigned char );
extern void char_lcd(unsigned char );  

#endif
