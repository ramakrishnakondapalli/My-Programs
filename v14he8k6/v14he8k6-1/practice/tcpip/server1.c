#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
main(int argc,char **argv)
{
int sfd,cfd;
sfd=socket(AF_INET,SOCK_STREAM,0);
if(sfd<0)
{
perror("socket");return;
}
printf("%d socket created succeffully\n",sfd);
struct sockaddr_in saddr;
saddr.sin_family=AF_INET;
saddr.sin_port=htons(atoi(argv[1]));
saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
{
perror("bind");return;
}
printf("bind success");
struct sockaddr_in caddr;
printf("\nserver waiting for client");
if(listen(sfd,1)<0)
{
perror("listen");
return;
}
if((cfd=accept(sfd,(struct sockaddr*)&caddr,(int *)sizeof(caddr)))<0)
{
perror("accept");
return;
}
printf("connection success\n");
char buff[20];
while(1)
{
  printf("Enter msg:");
  gets(buff);
  if(strcmp(buff,"QUIT")==0)
   {  return;}
  send(sfd,buff,20,0);
  recv(sfd,buff,20,0);
  printf("%s",buff);
}

close(sfd);
close(cfd);

}
