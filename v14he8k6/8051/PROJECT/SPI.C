#ifndef SPI_H

#define SPI_H
#endif
void init_spi()
{
	SPCTL=0x05;
	cs=deselect;

}
void CMD_2515(u8 CMD)
{
  cs=select;
  

   cs=deselect;
}
void spi_write()
{



}
void spi_write()
{
  cs=1;
  spi_writecmd();
  spi_writedata();

 cs=1;
}
void spi_read()
{
  cs=0;
  spi_writecmd();
   spi_writeaddress();
   spi_writedata();
  cs=1;
}
void modify_2515(u8 addr)
{
 bit bit; 
 cs=0;
   bit=5; 
   bit&=ff;
   spi_write();
   spi_writedata();
   	  cs=1;
}


 

