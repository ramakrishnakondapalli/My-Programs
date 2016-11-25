#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/resource.h>
main()
{
  signal(2,SIG_IGN);
  printf("processs :%d",getpid());
   while(1)
   {
     sleep(5);
      printf("process exiting");
      exit(0);
    }
}
