#include"headers.h"
main(int argc,char **argv)
{
 int sfd,cfd,ret;char buff[30];
  sfd=socket(AF_INET,SOCK_STREAM,0);
   if(sfd<0)
    {   perror("socket");return;}
  struct sockaddr_in saddr;
   saddr.sin_family=AF_INET;
   saddr.sin_port=htons(atoi(argv[2]));
   saddr.sin_addr.s_addr=inet_addr(argv[1]);
     
 if(connect(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
     {perror("connect");return;}
 
  while(1)
  {
   printf("Enter msg:");
   gets(buff);
   ret=send(cfd,buff,30,0);
  
  if(recv(cfd,buff,30,0)<0)
     if(ret<0){perror("recv");return;}
   printf("%s",buff);
   printf("Enter msg:");
   gets(buff);
  if(recv(cfd,buff,30,0)<0)
     {perror("send");return;}
   if(strcmp(buff,"QUIT")==0)
      {return;}
   
  }  

  
close(cfd);
close(sfd);

}
