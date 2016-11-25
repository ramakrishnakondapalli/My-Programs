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
         read(p[0],str1,20);
         printf("%s",str1);
     }
     else
      {
       printf("Enter message");
       gets(str);
       write(p[1],str,20);

      }

}
