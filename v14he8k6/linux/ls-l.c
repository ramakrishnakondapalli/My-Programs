#include"headers.h"
#include<locale.h>
#include<pwd.h>
#include<dirent.h>
#include<time.h>
main()
{
  DIR *dp;
  struct dirent *ptr;
  struct stat buf;
  struct passwd *p;
  struct timeb tp;
  char d_name[20];
  struct tm *tm;
  char date[20];
   char month[20];
    char year[20];
  int d_ino;
   time_t t;
  dp=opendir("./");
   //printf(" %s",ptr->d_name);
  while(ptr=readdir(dp))
    {
       
   //   lstat("ptr->d_name",&buf);
       p=getpwuid(buf.st_uid);  
     //printf("%u",buf.st_uid);
         ftime(&tp);
            
       tm=localtime(&t);
          mktime(tm);
         printf("%d",tm->tm_year);
      strftime(date,20,"%D",tm);
        
     printf("%s",date);
  // printf("%s\t %s\t %s\t %d\t ",p->pw_name,p->pw_uid,p->pw_gid,buf.st_blksize);
      // printf("%s\n",ptr->d_name); 
      
    }
  closedir(dp);

}
