#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<fcntl.h>
main()
{
 int fd;char str1[20],str2[20];
  fd=open("fifo1",O_RDWR);
  if(fork())
  {
  read(fd,str1,20);
  printf("msg1:%s ",str1,getpid());
  printf("Enter message2:\n");
  gets(str1); 
 write(fd,str1,20);
 }
else
{
   printf("Enter message2:\n");
   gets(str2);
   write(fd,str2,20);
   read(fd,str2,20);
   printf("msg2:%s",str2);
   
}



}
