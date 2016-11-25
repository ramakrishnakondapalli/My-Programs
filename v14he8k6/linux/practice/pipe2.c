#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<unistd.h>
main()
{
char buff[20];
int p[2];
pipe(p);
//printf("%d",p[0]);
if(fork())
{
close(0);
dup(p[0]);
close(p[1]);
//printf("%d",p[0]);
//printf("Enter data");
//gets(buff);
execlp("wc","wc",NULL);
//read(p[0],buff,20);

}
else
{
close(1);
dup(p[1]);
close(p[0]);//we have to close the other end of the pipe while using one end
execlp("ls","ls",NULL);
//write(p[1],"ramakrishna",12);

}
}
