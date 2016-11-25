#include"myheaders.h"
void isr(int n);
void isr(int n)
{
  printf("in isr\n");
   wait();
  
}
main()
{
    int n,q;
     signal(SIGCHLD,isr);
   printf("process:%d\n",getpid());
    if(fork()==0)
   {
         
      printf(" parent :%d child :%d\n",getppid(),getpid());
        sleep(4);
       exit(1);
   }
   if(fork()==0)
   {    printf(" parent :%d child :%d\n",getppid(),getpid());
          
    // sleep(9);
   q=getpid();
    
   }
   if(fork()==0)
   {

     printf("parent :%d child :%d",getppid(),getpid());
      exit(3);
   }
   {
     
     n=wait(q);
     printf("%d",n);
      if(n==2)
       {
           n>>=8;
            wait(2);
       }
      
       printf("process:%d\n exiting",getpid());
   }
  
}
