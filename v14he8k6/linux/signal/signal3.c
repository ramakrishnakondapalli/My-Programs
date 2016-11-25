#include"headers.h"
void f1(int n)
{
printf("In function");
}
main()
{
  struct rlimit v;
 printf("process : %d",getpid());
if(getrlimit(RLIMIT_STACK,&v))
  {
    perror("getrlimit");return;
  }
if(setrlimit(RLIMIT_CPU,&v))
 {
    perror("setrlimit");return;
  }
    printf("process : %d",getpid());
   v.rlim_cur=5;
   v.rlim_max=10;
  printf("%d %d ",(unsigned int)v.rlim_cur,(unsigned int)v.rlim_max);
 // signal(24,f1);
   while(1)
 {
    sleep(5);
   signal(24,f1);
   printf("process .......exiting");
 }




}

