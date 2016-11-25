#include<stdio.h>
#include"myheaders.h"
main()
{
   int v=1;
   if(fork()==0)
  {
  printf("IN child:%d\n",v);
  v++;
  printf("I chld:%d\n",v);
   sleep(1);
   printf("In child:%d",v);
  }
else
  {
   printf("In parent :%d\n",v);
   v++;
   printf("In parent:%d\n",v);
    sleep(5);
    printf("In paent:%d",v);
  }
  printf("%d",v);
}
