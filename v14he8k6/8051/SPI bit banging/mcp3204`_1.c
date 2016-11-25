float read_adc_mcp3204(unsigned char chno)
{
  unsigned char byte0,byte1,byte2,i;
  
    byte0=spi(0x06);
    byte1=spi(chNo);
    byte2=spi(0x00);
   
   return(adc_val*(5/4095));
}unsigned char spi(unsigned char dat)
{
  unsigned char i,buff=0;
  for(i=0;i<8;i++)
   {
         din=(dat&(0x80>>i))?1:0;
         if(dout)  buff|=0x80>>i;

   }

return buff;

}
