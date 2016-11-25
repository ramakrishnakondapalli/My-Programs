#include"headers.h"
main()
{
  int fd;
   char wrbuf[20];
   fd=open("fifo",O_RDWR);
   while(1)
    {
          printf("Enter msg:");
          gets(wrbuf);
          write(fd,wrbuf,20);
          if(strcmp(wrbuf,"QUIT")==0)
            break;
    }
 close(fd);



}
