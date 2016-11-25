#include"headers.h"
void client_info(struct sockaddr_in *, int);
main(int argc,char **argv)
{
  int sfd,fd;
  fd_set rfds,testfds;
 if(argc!=2)
  { printf("Input server well_known_portNo");return;}
  sfd=socket(AF_INET,SOCK_STREAM,0);
  if(sfd<0)
   {
     perror("socket");return;
   }
   printf("socket created successfully\n");
   printf("socket option set for address already in use:\n");
    int on=1;
    if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,&on,sizeof(on))<0)
      {
       perror("setsockopt");return;
      }
  struct sockaddr_in saddr;
   saddr.sin_family=AF_INET;
   saddr.sin_port=htons(argv[1]);
   saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
   if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
      {
          perror("bind");return;
      }
    printf("bind success\n");
    if(listen(sfd,1)<0)
       {
          perror("listen");return;
        }
       printf("listen success\n");
     struct sockaddr_in caddr;
       caddr.sin_family=AF_INET;
       caddr.sin_port=htons(argv[1]);
         caddr.sin_addr.s_addr=inet_addr("0.0.0.0");
     int cfd;
      
      FD_ZERO(&rfds);
      FD_SET(sfd,&rfds);
   struct timeval tv;
     tv.tv_sec=100;
     tv.tv_usec=0;
       while(1)
       {
        testfds=rfds;
        printf("Server waiting for connection input from new client\n");
        int result,clen;
           clen=sizeof(caddr);
        result=select(10,&rfds,0,0,&tv);
        if(result<0)
           {
              perror("select");return;
           }
         if(result==0)
          {
           printf("timeout\n");return;
          }
           
      for(fd=0;fd<10;fd++)
      {
        if(FD_ISSET(fd,&testfds))
           {
              if(fd==sfd)
               {
                    cfd=accept(sfd,(const struct sockaddr *)&caddr,&clen);
                      if(cfd<0)
                           {
                             perror("accept");return;
                            }
                        printf("server accepted connection from client\n");
                       client_info(&caddr,cfd);
                           FD_SET(cfd,&rfds);
               }
              else
              {
                  char buff[100];
                 int ret;
                 printf("serving client on fd :%d",fd);
                   ret=recv(fd,buff,100,0);
                    if(ret<0)
                       {
                           perror("recv");return;
                       }
                     if(ret==0)
                     {
                      printf("client terminated abnormally\n");
                        close(fd);
                      FD_CLR(fd,&rfds);
                      printf("removing client on fd:%d",fd);return;
                    }
             printf("data received from client fd:%d is %s\n",fd,buff);
                 if(send(fd,buff,100,0)<0)
                     {
                           perror("send");return;
                      }
                  printf("server echoed:%s\n",buff);
                   if(strcmp(buff,"quit")==0)
                     {
                         puts("client with\n");
                         client_info(&caddr,fd);
                           printf("is closing connection\n");
                            close(fd);
                            FD_CLR(fd,&rfds);
                             break;
                     }

              }
           }
      }     
 }
 
}
void client_info(struct sockaddr_in *cadr,int fd) 
{
int cfd=fd;
/* cadr->sin_family;
 cadr->sin_port;
cadr->sin_addr.s_addr;
*/


}

