#include"headers.h"
void isr(int n)
{
  printf("In isr\n");
  


}
main()
{
   int p[2];
    pipe(p);
    int fd1,v,fd2;
     signal(SIGPIPE,isr);
    fd1=open("f1",O_RDWR);
      close(fd1);
      dup(p[0]);
      close(p[1]);
   while(read(p[0],&v,1)==1)
    fd2=open("f2",O_WRONLY);
      close(fd2);
      dup(p[1]);
      close(p[0]);
       close(fd2);
    l:  if(write(p[1],&v,1)==1)
       {

         goto l;
       }
}
