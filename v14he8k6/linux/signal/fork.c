#include"headers.h"
main()
{
  int ret;
  printf("Process :%d",getpid());
 ret=fork();
   printf("After process:%d ",getpid());




}
