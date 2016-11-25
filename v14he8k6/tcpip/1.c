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
saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
  {
   perror("bind");return;
  }
printf("bind success\n");
printf("creating connection queue\n");
  if(listen(sfd,1)<0)
    {
     perror("listen");return;
    }
printf("connection queue success\n");
struct sockaddr_in caddr;
int clen;
  clen=sizeof(caddr);
   printf("server waitng for client:\n");
   if(accept(sfd,(const struct socaddr *)&saddr,&clen)<0)
    {  perror("accept");return;}
   puts("connection success\n");
  while(1)
   {
     ret=recv(cfd,buff,30,0);
      if(ret<0)
        {  perror("recv");return; }
      if(ret==0)
        {printf("child terminated abnormally\n");return; }
       printf("rcvd:%s",buff);
        if(strcmp(buff,"quit")==0)
          return;
        ret=send();

  }
   



}
