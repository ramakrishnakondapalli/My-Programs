#include"headers.h"
main()
{
  struct rlimit v;
  while(1)
{
  printf("Process :%d\n",getpid());
  v.rlim_max=5;
  if(setrlimit(RLIMIT_CPU,&v)==-1) 
   perror("setrlimit");
  else
   {
   printf("limit updated\n");
   if(getrlimit(RLIMIT_CPU,&v)==-1)
      perror("getrlimit");
    else
      printf("CPU TIME LIMIT UPDATED FROM %d TO :%d\n",v.rlim_cur,v.rlim_max);
   }
}


}
