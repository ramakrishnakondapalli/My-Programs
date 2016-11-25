#include"headers.h"
main()
{
   int fd1,fd2,size;
   char *buf;
    fd1=open("testfile",O_RDONLY);
    size=lseek(fd1,0,2);
     lseek(fd1,0,0);
    buf=calloc(1,size);
    read(fd1,buf,1);
     close(1);
    fd2=open("/dev/pts/1"O_WRONLY);
    write(fd2,buf,size);
     close(fd1);
     close(fd2);





}
