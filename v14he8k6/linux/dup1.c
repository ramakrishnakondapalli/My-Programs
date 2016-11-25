#include"headers.h"
main()
{
int fd1,fd2,fd3;
  fd1=open("f1",O_CREAT|O_RDWR,06000);
   fd2=dup(fd1);
    write(fd2,"xyz",3);
    close(fd3);
   fd3=dup(fd2);
  printf("%d %d %d",fd1,fd2,fd3);
  close(fd1);
close(fd2);
  write(fd3,"fd3",3);
close(fd3);

}
