#include"myheaders.h"
main()
{
   int n;
   printf("process :%d\n",getpid());
   n=fork();
   if(n==0)
  {
   printf("parent:%d child:%d\n",getppid(),getpid());
     n=fork();
     if(n==0)
      {
            printf("parent :%d child:%d\n",getppid(),getpid());
          n=fork();
          if(n==0)
           {
         
             printf("parent :%d child: %d",getppid(),getpid());
           }
       }
   }
  ;  
// n=fork();
//   if(n==0)
  {  
//  printf("parent:%d child:%d\n",getppid(),getpid());
  }
//  n=fork();
//  if(n==0)
   {
//     printf("process :%d",getpid());
   }
}
