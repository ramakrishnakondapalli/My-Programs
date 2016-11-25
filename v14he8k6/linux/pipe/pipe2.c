#include"headers.h"
main()
{
  int p[2],fd1;
  pipe(p);
   printf("%d\n",getpid());
   if(fork()==0)
    {
       
       close(0);
      dup(p[0]);
     
     // close(p[1]);
       execlp("wc","wc",NULL);
    }
   else
    {
      printf("%d",getpid());
       close(1);
        dup(p[1]);
      //  close(p[0]);
         execlp("ls","ls",NULL);

     }






}
