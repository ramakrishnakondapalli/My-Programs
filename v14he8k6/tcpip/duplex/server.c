#include"headers.h"
main(int argc,char **argv)
{
  int sfd;
  printf("creating server socket\n");
  sfd=socket(AF_INET,SOCK_STREAM,0);
   if(sfd<0)
    {
        perror("socket");return;
     }
   printf("server socket created successfully\n");
    
    struct sockaddr_in saddr;
    saddr.sin_family=AF_INET;
    saddr.sin_port=htons(atoi(argv[1]));
    saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
     puts("bind.....\n");
      if(bind(sfd,(const struct sockddr*)&saddr,sizeof(saddr))<0)
          {
              perror("bind");
              return;
          }
     puts("creting connection queue\n");
     if(listen(sfd,1)<0)
        {
             perror("listen");
              return;
        }
      puts("listen successfull\n");
        struct sockaddr_in caddr;
     int clen=sizeof(caddr);
      int cfd;
        printf("Server waiting for client.......\n");
          cfd=accept(sfd,(const struct sockaddr *)&caddr,&clen);
           if(cfd<0)
             {
                 perror("accept");
                  return;
                }
              puts("connection success........\n");
  char *ip=inet_ntoa(caddr.sin_addr);
     unsigned short portNo=ntohs(caddr.sin_port);
     printf("client ip:%s\n",ip); 
     printf("client ephemeral port:%d\n",portNo);    
 char buff[100];int ret;
  while(1)
  {
     printf("server waiting for msg from client:\n");
     ret=recv(cfd,buff,100,0);
     if(ret<0)
     {
           perror("recv");
            return;
      }
    if(ret==0)
      {
         printf("child terminated abnormally");break;
      }
    printf("rcvd:%s",buff);
    printf("srver echoing:\n");
       ret=send(cfd,buff,100,0);
      if(ret<0)
       {
         perror("send");
          return;
      }
      printf("server echoed:%s\n",buff);
      if(strcmp(buff,"quit")==0)
      {
            printf("client terminated\n");
            return;
      }
   }
  close(sfd);
  close(cfd);

}    


