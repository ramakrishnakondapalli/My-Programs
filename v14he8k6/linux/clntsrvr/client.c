#include"headers.h"
main()
{
  int fd1,fd2;
  char rdbuf1[20],rdbuf2[40];
   fd1=open("fifo",O_RDWR);
   fd2=open("fifo1",O_RDWR);
   printf("%d",fd1);
  while(1)
  {
   printf("Enter message:");
   gets(rdbuf1);
   write(fd1,rdbuf1,20);
  if(read(fd2,rdbuf2,40)==1);
    
      printf("msg successfully sent to server\n");
     printf("no of characters:%d no of numerics:%d no of special characters :%d\n",rdbuf2[0],rdbuf2[1],rdbuf2[2]);
       
    if(strcmp(rdbuf2,"QUIT")==0)
         break;
   }
   close(fd1);

   close(fd2);

}
