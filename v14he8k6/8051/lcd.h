#ifndef lcd_h
#define lcd_h
		  extern void init_lcd();
		  extern void cmd_lcd(unsigned char);
		  extern void float_lcd(float);
		  extern void int_lcd(unsigned int);
		  extern void char_lcd(unsigned char);
		  extern void write_lcd(unsigned char);
		  extern void delay_ms(unsigned char);

			 #endif
