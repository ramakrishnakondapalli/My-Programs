#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<signal.h>
void client_info(int cfd,struct sockaddr_in caddr)
{
printf("client IP address\t");
char str[100];
printf("%d",(caddr.sin_addr.s_addr));
printf("%s\n",(char *)inet_ntoa((struct in_addr )caddr.sin_addr.s_addr));
printf("client Ephemeral port\t");
printf("%d\n",ntohs(caddr.sin_port));
}
main(int argc, char **argv)
{
int sfd,cfd,clen;
struct sockaddr_in saddr,caddr;
saddr.sin_family=AF_INET;
saddr.sin_port=htons(atoi(argv[1]));
saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
   if((sfd=socket(AF_INET,SOCK_STREAM,0))<0)
     {
       perror("socket");
       return;      
    }
    printf("Socket created successfully\n");
    if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
               perror("bind");
     if(listen(sfd,1)<0)
           perror("listen");
      clen=sizeof(caddr);
     if((cfd=accept(sfd,(struct sockaddr *)&caddr,&clen))<0)
               perror("caddr");
         printf("Connection success\n");
         client_info(cfd,caddr);
}

