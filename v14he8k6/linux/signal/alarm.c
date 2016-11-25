#include"myheaders.h"
void isr(int);
void isr(int n)
{
  printf("in isr");
// alarm(1);
}
main()
{
   printf("process :%d",getpid());
     signal(SIGALRM,isr);
     
  while(1);
   alarm(2);
}
