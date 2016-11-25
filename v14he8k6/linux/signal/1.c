#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>
main()
{
 int n;
  printf("In parent :%d\n",getpid());
  n=fork();
  if(n==0)
  {
    printf("In child :%d %d\n",getpid(),getppid());
     //exit(0);
  }
  
 printf("IN parent:%d",getpid());




}
