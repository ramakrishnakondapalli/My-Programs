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
     if(connect(fd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
             {
                 perror("connect");
                  return;
                }
              puts("connection success........\n");
     
      char buff[100];int ret;
      while(1)
       {
          puts("enter message for client \n");
          memset(buff,'\0',100);
            gets(buff);
            puts("sending.........\n");
           ret=send(fd,buff,100,0);
            if(ret<0)
              {   perror("send");return;}
             printf("sent:%s\n",buff);
             memset(buff,'\0',100);
             puts("waiting for reply...........\n");
               ret=recv(fd,buff,100,0);
                 if(ret<0)
                    {
                       perror("recv");
                       break;
                    }
             else if(ret==0)
                {
                  puts("server abnormally terminated\n");break;
                }
              printf("recvd:%s\n",buff);
              
              printf("server echoed:%s\n",buff);
             if(strcmp(buff,"quit")==0)
               {
                    puts("terminating formally\n");
                      break;
               }
             
       }
    close(fd);
   

}    


