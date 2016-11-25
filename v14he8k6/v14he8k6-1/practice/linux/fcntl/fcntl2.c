#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<fcntl.h>
#include<sys/resource.h>
#include<termios.h>
main()
{
int p[2],fd;
pipe(p);char ch;
struct termios v;
tcgetattr(0,&v);

v.c_lflag&=~ICANON;
//v.c_lflag&=~I_ECHO;
tcsetattr(0,TCSANOW,&v);
fd=open("/dev/pts/1",O_RDWR);
close(1);
fcntl(fd,F_DUPFD,0);
printf("\e[32mEnter  a character\e[m\n");
ch=getchar();
printf("\e[33mYou have Entered %c\e[m\n",ch);

printf("%d",fd);
printf("%d\n",getpid());
while(1)
printf("%d\n",getpid());


}
