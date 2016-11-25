//input two files and find how they are related one is Hard link to other 
#include"headers.h"
main()
{
   struct stat v,s;
   if(lstat("f1",&v)==-1)
     {
       perror("stat");return;
     }
    if(lstat("f4",&s)==-1)
      {
          perror("stat");return;
      }
      printf("No of Hard links to f1:%d\n",v.st_nlink);
      
      printf("No of Hard links to f4:%d\n",s.st_nlink);
      
      printf("INODE no of f1:%d\n",v.st_ino);
      
      printf("INODE no of  f4:%d\n",s.st_ino);
    if(v.st_ino==s.st_ino)
     {
        printf("f4 is softlink to f1");
     }
    else
      printf("No relation");
      

}
