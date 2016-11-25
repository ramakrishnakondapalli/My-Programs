#include"headers.h"
main()
{
   struct stat v,s;
    if(stat("1.c",&v)==-1)
     {
       perror("static");return;
     }
     if(stat("f1",&s)==-1)
      {
         perror("static");return;
      }
     if(v.st_size<s.st_size)
       {
         printf("f1 has more size than 1.c\n");
       }
     else
          printf("1.c has moresize than f1\n");
      if(v.st_mtime<s.st_mtime)
        {
            printf("1.c is last modified");
         }
       else
         {
             printf("f1 is last modified");
         }
     
      



}
