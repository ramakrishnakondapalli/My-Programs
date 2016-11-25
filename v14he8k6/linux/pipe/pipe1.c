#include"headers.h"
main()
{
 int p[2];
 pipe(p);
  int v=1;
  if(fork())
   {
     sleep(5);
     printf("%d",getpid());
     while(1)
          {
             read(p[0],&v,4);
             printf("%d\n",v);
            }
       
   }
  else
    {
         int i=0;
          while(i<10)      
          {
            i++;
              sleep(1);
                  write(p[1],&i,4);
          }

    }








}
