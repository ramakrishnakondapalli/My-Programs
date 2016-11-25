#include<stdio.h>
#include<stdlib.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
main(int argc,char **argv)
{
int fd;
fd=socket(AF_INET,SOCK_STREAM,0);
if(fd<0)
{ 
 perror("socket");return;
}
  printf("%dsocket created\n",fd);
struct sockaddr_in saddr;
 saddr.sin_family=AF_INET;
 saddr.sin_port=htons(atoi(argv[1]));
 saddr.sin_addr.s_addr=inet_addr(argv[2]);
if(bind(fd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
perror("bind");
printf("Waiting for connection\n");
if(connect(fd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
 {
  perror("connect");return;
}
printf("connection success\n");
char buff[20];
while(1)
{
  recv(fd,buff,20,0);
  if(strcmp(buff,"QUIT")==0)
    { return;}
   printf("%s",buff);
   printf("Enter msg:");
   scanf("%s",buff);
   send(fd,buff,20,0);



}
close(fd);
}
