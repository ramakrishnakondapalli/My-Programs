#include"headers.h"
main()
{
   int p[2];
   pipe(p);
   int v=1;
   if(fork())
    {
       
       sleep(5);
      
         int i;
        while(read(p[0],&v,4)==1)
         {
                i++;
         }
          printf("size of pipe is:%d",i*4);
    }
   else
     {
       while(1)
       {
       write(p[1],&v,4);
         v++;
       }

     }



}
