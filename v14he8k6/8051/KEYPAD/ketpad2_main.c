//#include<reg51.h>
//#include"keypad3.c"
extern unsigned char keyscan(void);
main()
{
while(1)
{
  P2=keyscan();
}

}