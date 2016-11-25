#include"headers.h"
main()
{
  struct rlimit v;
 if(getrlimit(RLIMIT_CPU,&v)==-1)
   perror("getrlimit");
   
  printf("%u %u",v.rlim_cur,v.rlim_max);




}
