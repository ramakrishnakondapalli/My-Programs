#include"headers.h"
main()
{
  int fd;
   char rdbuf[20];
   fd=open("fifo",O_RDWR);
   while(1)
    {
          printf("waiting....\n");
           read(fd,rdbuf,20);
         printf("%d :%s\n",getpid(),rdbuf);
          if(strcmp(rdbuf,"QUIT")==0)
            break;
    }
 close(fd);



}
