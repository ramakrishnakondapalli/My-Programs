#include"headers.h"
main()
{

 struct rlimit v;
printf("Process :%d \n",getpid());
if(getrlimit(RLIMIT_STACK,&v)==-1)
   {
     perror("getrlimit");
      return;
   }
   printf("Softlimit :%d\n",v.rlim_cur/1024);
   printf("Hard limit:%u\n %d",(unsigned int)v.rlim_max/1024,(unsigned int)v.rlim_max/(unsigned int)v.rlim_cur);
}
