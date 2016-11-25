#include"headers.h"
main()
{
 struct rlimit v;
  int cnt=0;

printf("Process :%d \n",getpid());
  if(getrlimit(RLIMIT_CPU,&v)==-1)
   {
     perror("getrlimit");
      return;
   }
    // v.rlim_cur=1;
     v.rlim_max=5;
   printf("Softlimit :%u %d\n",v.rlim_cur,sizeof(v.rlim_cur));
   printf("Hard limit:%u\n",v.rlim_max);
 //  if(setrlimit(RLIMIT_CPU,&v)==-1)
    {
   //    perror("setlimit");
   //     return;
    } 

   while(1)
   {
     printf(" %d",cnt);
      cnt++;
   }
}
