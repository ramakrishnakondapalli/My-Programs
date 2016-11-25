#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
main()
{
int fd1,fd2;char str[20];
close(0);
fd1=open("4.c",O_RDWR);
//read(fd1,str,20);
scanf("%s",str);
printf("%s",str);



}
