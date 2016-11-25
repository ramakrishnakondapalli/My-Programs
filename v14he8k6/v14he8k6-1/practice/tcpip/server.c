#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<netdb.h>
#include<sys/socket.h>
#include<unistd.h>
#include<signal.h>
#include<arpa/inet.h>
main(int argc,char **argv)
{
  int sfd,cfd;
char *str;
   if(sfd=socket(AF_INET,SOCK_STREAM,0)<0)
    {
    perror("socket");return;
    }  
  printf("%dSocket created successfully\n",sfd); 
 struct sockaddr_in saddr;
    saddr.sin_family=AF_INET;
    saddr.sin_port=htons(atoi(argv[1]));
    saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
 if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
  {
     perror("bind");return;
  }  
  
 if(listen(sfd,1)<0)
   {
  perror("listen");return;
  }
  printf("listen success\n");
 struct sockaddr_in caddr;
 if(accept(cfd,(struct sockaddr *)&caddr,(int *)sizeof(caddr))<0)
 perror("accept");
  printf("connection success\n");
  recv(cfd,str,10,0);
  puts(str);

}
