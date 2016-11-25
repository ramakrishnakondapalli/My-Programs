//use a pipe to communicate between nm and grep
#include"headers.h"
main(int argc,char **argv)
{
   int p[2];
    pipe(p);
    int v=1;
    if(fork())
     {
       close(0);
       dup(p[0]);
//       sleep(5);
//       read(p[0],&v,4);
        close(p[1]);
       execlp("grep","grep",argv[2],argv[3]);
     

     }
    else
     {
       close(1);
        dup(p[1]);
         close(p[0]);
          execlp("nm","argv[1]",NULL);         

    }

}
