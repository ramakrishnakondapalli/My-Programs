#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/stat.h>
main()
{
int fd;char str[20];
printf("Enter msg");
gets(str);
fd=open("f1",O_RDONLY,0660);
/****************Apply Lock********************/
struct flock v,s;
 v.l_type=F_RDLCK;
 v.l_whence=0;
 v.l_start=0;
 v.l_len=0;
if(fcntl(fd,F_SETLKW,&v)==-1)
 perror("fcntl");
write(fd,str,20);
////*******************Release Lock******************/
s.l_type=F_RDLCK;
s.l_whence=0;
s.l_start=0;
s.l_len=0;
fcntl(fd,F_GETLK,&s);
printf("%d",s.l_type);
printf("%d",s.l_whence);
printf("%d",s.l_start);
printf("%d",s.l_len);
close(fd);


}
