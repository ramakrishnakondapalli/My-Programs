#include<stdio.h>
#include<signal.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
main()
{
   int p[2];
    pipe(p); 
   char str[20],str1[20];
    if(fork())
     {
         printf("%d",getpid);
         close(0);
         dup(p[0]);
         close(p[1]);
         execlp("wc","wc",NULL);
         //read(p[0],str1,20);
       //  printf("%s",str1);
     }
     else
      {
       //printf("Enter message");
       //gets(str);
       printf("%d",getpid());
      close(1);
       dup(p[1]);
      //  close(p[0]);
      //execlp("ls","ls",NULL);
      //write(p[1],str,20);

      execlp("ls","ls",NULL);
      
      }

}
