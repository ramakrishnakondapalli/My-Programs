//copy contents of file f1 into file f2
#include"headers.h"
main()                                                                            {
  int fd1,fd2,v;
   int p[2];
   pipe(p);
   if(fork())
  {
   close(p[0]);
   fd1=open("f1",O_RDONLY);
   printf("fd1:%d\n",fd1);
    close(fd1);
//    close(p[0]);
      dup(p[0]);
     printf("%d\n",p[0]);
    close(p[1]);
     while(read(p[0],&v,4)==1);
  }
  else
   {
     close(p[1]);
     fd2=open("f2",O_WRONLY);
      printf("fd2:%d\n",fd2);
     close(fd2);
      dup(p[1]);
      printf("%d\n",p[1]);
      close(p[0]);
     while(write(p[1],&v,4)==1);
     }
}
