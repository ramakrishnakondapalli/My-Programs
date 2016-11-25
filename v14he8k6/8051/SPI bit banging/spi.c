unsigned char spi(unsigned char dat)
{
   unsigned char i,buff=0;
    for(i=0;i<8;i++)
    {
       din=(dat&(0x80>>i))?1:0;

     }

    if(dout)
    buff |=0x80>>i;

   return buff;
}
