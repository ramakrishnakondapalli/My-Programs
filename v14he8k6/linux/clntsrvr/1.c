#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<fcntl.h>
main()
{
  int fd1,fd2;
  char wrbuf[20],rdbuf[20];
  fd1=open("fifo",O_RDWR);
  fd2=open("fifo2",O_RDWR);
  printf("Enter message:");
   gets(wrbuf);
   write(fd1,wrbuf,20);
   read(fd1,rdbuf,20);
   printf("%s",rdbuf);

}
