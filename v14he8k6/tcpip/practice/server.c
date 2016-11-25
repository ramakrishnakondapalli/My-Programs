#include"headers.h"
main(int argc,char **argv)
{
 int sfd,cfd,ret;char buff[20];
  printf("creating socket\n");
  sfd=socket(AF_INET,SOCK_STREAM,0);
   if(sfd<0)
    {   perror("socket");return;}
printf("socket created successfully\n");
  struct sockaddr_in saddr;
   saddr.sin_family=AF_INET;
   saddr.sin_port=htons(atoi(argv[1]));
   saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
   if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
     {perror("bind");return;}
   printf("creating connection queue\n");
    if(listen(sfd,1)<0)
     {perror("listen");return;}
   printf("connection queue created successfully\n");    
   struct sockaddr_in caddr;
   int clen=sizeof(caddr);
   printf("server waiting for client\n");
   if((cfd=accept(sfd,(const struct sockaddr *)&caddr,&clen))<0)
     {perror("accept");return;}
  printf("connection accepted\n");
  while(1)
  {
    ret=recv(cfd,buff,30,0);
     if(ret<0){perror("recv");return;}
   printf("%s",buff);
   printf("Enter msg:\n");
   gets(buff);
   if(strcmp(buff,"QUIT")==0)
      {return;}
   if(send(cfd,buff,30,0)<0)
     {perror("send");return;}
  
  }  

  
close(cfd);
close(sfd);

}
