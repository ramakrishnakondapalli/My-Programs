#include"headers.h"
main()
{
fd_set rfds,testfds;
int ret,i;
 
 FD_ZERO(&rfds);
 FD_SET(3,&rfds);
 FD_SET(4,&rfds);
 FD_SET(5,&rfds);
 FD_SET(7,&rfds);
  ret=select(10,&rfds,0,0,20);
   if(ret==-1)
    {
     perror("select");return;
    }
  printf("%d\n",ret);
  for(i=0;i<10;i++)
  {
      if(FD_ISSET(i,&rfds))
        printf("%d ",i);
  }






}
