#include"headers.h"
main()
{
    
     int p[2];
     pipe(p);
     char buf[2];
   
   if(fork())
    {
      
     printf("In chld:%d %d\n",getpid(),getppid());
 //    close(0);
     close(p[1]);
 //    printf("Enter mesage:");
     read(p[0],buf,3);
     printf("%s",buf);

    }
   else
    {
    
      printf("In parent:%d \n",getpid());
    //  close(1);
      close(p[0]);
    //  dup(p[1]);
      write(p[1],"xyz",3);
     // close(p[]);
      
    }

}
