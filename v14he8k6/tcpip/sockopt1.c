#include"headers.h"
#include<netinet/if_ether.h>
main(int argc,char **argv)
{
  int s=-1;
   char *optname=argv[1];
  s=socket(AF_INET,SOCK_STREAM,0);
   if(s==-1)
   {
     perror("socket");return;
   }
  if(setsockopt(s,SOL_SOCKET,SO_BINDTODEVICE,optname,strlen(optname)+1)<0)
    {
      perror("setsockopt");return;
    }
  printf("bind success to %s\n",optname);
  close(s);
  return 0;
}
