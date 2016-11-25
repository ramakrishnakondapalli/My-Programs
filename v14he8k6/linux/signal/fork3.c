#include"myheaders.h"
main()
{
   int n;
   printf("process :%d\n",getpid());
   n=fork();
   if(n==0)
  {
   printf("parent:%d child:%d\n",getppid(),getpid());
    exit(0);
  }  
  n=fork();
   if(n==0)
    {
       printf("parent :%d child :%d\n",getppid(),getpid());
       exit(0);
    }
  n=fork();
  if(n==0)
   {
     printf("parent:%d child:%d\n",getppid(),getpid());
      exit(0);
   }
  
// n=fork();
//   if(n==0)
  {  
//  printf("process :%d\n",getpid());
  }
//  n=fork();
//  if(n==0)
   {
//     printf("process :%d",getpid());
   }
}
