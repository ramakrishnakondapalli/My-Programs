#include"myheaders.h"
#include<string.h>
void isr(int);
void isr(int n)
{
   int sum,x;
   printf("In isr\n");
   wait(&x);
   printf("Addition is:%d\n",x);

}
main(int argc,char **argv)
{   int n,sum;
    signal(SIGCHLD,isr);
    printf("process :%d\n",getpid());
     n=fork();
     if(n==0)
     {   
       printf("In child :%d\n",getpid());
       sum=atoi(argv[1])+atoi(argv[2]);
       printf("Child exiting\n");
       exit(1);
     }
      printf(" parent %d exiting\n",getpid());


}

