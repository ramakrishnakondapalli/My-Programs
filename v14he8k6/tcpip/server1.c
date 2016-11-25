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
      if(bind(sfd,(const struct sockaddr*)&saddr,sizeof(saddr))<0)
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
          cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
           if(cfd<0)
             {
                 perror("accept");
                  return;
                }
              puts("connection success........\n");
             printf("client IP:%s",inet_addr(caddr.sin_port));
    
}

