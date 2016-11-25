#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netdb.h>
#include<sys/select.h>
main(int argc,char **argv)
{
int sfd,cfd;
sfd=socket(AF_INET,SOCK_STREAM,0);
if(sfd==-1)
{
  perror("socket");return;
}
struct sockaddr_in saddr;
saddr.sin_family=AF_INET;
saddr.sin_port=htons(atoi(argv[1]));
saddr.sin_addr.s_addr=inet_addr(argv[2]);
if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
  {
   perror("bind");return;
  }
printf("bind success\n");

  if(connect(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
    {
     perror("connect");return;
    }
printf("connection  success\n");




}
