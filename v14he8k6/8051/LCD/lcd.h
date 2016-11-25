#ifndef lcd_h
#define lcd_h


  extern void char_lcd( char);
  extern void cmd_lcd( char);
  extern void write_lcd(char);
  extern void init_lcd(void);

  extern void str_lcd(char *);
  extern void int_lcd(unsigned int);
  extern void float_lcd(float);
  extern void build_cgram(unsigned char *,unsigned int);

#endif
