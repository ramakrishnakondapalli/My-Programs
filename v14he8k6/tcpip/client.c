#include"headers.h"
main(int argc,char **argv)
{
  int fd;
  printf("creating cient socket\n");
  fd=socket(AF_INET,SOCK_STREAM,0);
   if(fd<0)
    {
        perror("socket");return;
     }
   printf("client socket created successfully\n");
    
    struct sockaddr_in saddr;
    saddr.sin_family=AF_INET;
    saddr.sin_port=htons(atoi(argv[1]));
    saddr.sin_addr.s_addr=inet_addr(argv[2]);
     puts("bind&connect.....\n");
      if(bind(fd,(const struct sockddr *)&saddr,sizeof(saddr))<0)
          {
              perror("bind");
              return;
          }
/*     puts("creting connection queue\n");
     if(listen(sfd,1)<0)
        {
             perror("listen");
              return;
        }
      puts("listen successfull\n");
        struct sockaddr_in caddr;
     int clen=sizeof(caddr);
      int cfd;
        printf("Server waiting for client.......\n");*/
          if(connect(fd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
             {
                 perror("connect");
                  return;
                }
              puts("connection success........\n");


}    


