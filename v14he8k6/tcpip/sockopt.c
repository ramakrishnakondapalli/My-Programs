#include"headers.h"

int z;
int sndbuf=0;
int rcvbuf=0;
socklen_t option1=sizeof(sndbuf),option2=sizeof(rcvbuf);
 void getsockopt(int fd)
  {
      z=getsockopt(fd,SOL_SOCKET,SO_SNDBUF,&sndbuf,&option1);
       if(z){perror("getsockopt");return;}
       z=getsockopt(fd,SOL_SOCKET,SO_RCVBUF,&rcvbuf,&option2);
        if(z){perror("getsockopt");return;}
       printf("send buf:%dbytes\n",sndbuf);
       printf("recv buf:%dbytes\n",rcvbuf);
  }
 void setsockopt(int fd)
  {
      z=setsockopt(fd,SOL_SOCKET,SO_SNDBUF,&sndbuf,&option1);
       if(z){perror("setsockopt");return;}
       z=setsockopt(fd,SOL_SOCKET,SO_RCVBUF,&rcvbuf,&option2);
        if(z){perror("setsockopt");return;}
       printf("send buf:%dbytes\n",sndbuf);
       printf("recv buf:%dbytes\n",rcvbuf);
  }
 














