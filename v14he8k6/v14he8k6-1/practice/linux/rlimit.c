#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<sys/time.h>
main()
{
struct rlimit {
                rlim_t rlim_cur;
                rlim_t rlim_max;
                };
struct rlimit v;
  if(getrlimit(RLIMIT_CPU,&v)==-1)
    perror("getrlimit");
printf("STACK current limit:%u",(unsigned int)v.rlim_cur);
printf("STACK max limit:%u",(unsigned int)v.rlim_max);


  v.rlim_cur=1024;
if(setrlimit(RLIMIT_STACK,&v)==-1)
  perror("setrlimit");

printf("%d",(unsigned int)v.rlim_cur);


}
