#include"myheaders.h"
void isr(int);
void isr(int n)
{
  printf("in isr");
 alarm(1);
}
main()
{
   printf("process :%d",getpid());
     signal(SIGALRM,isr);
     alarm(5);
     alarm(2);
     alarm(1);
  printf("process exiting");
  while(1);
}
