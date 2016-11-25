#include"headers.h"
#include<pwd.h>
#include<dirent.h>
#include<locale.h>
#include<langinfo.h>
#include<grp.h>
#include<time.h>
main()
{
DIR *dp;

struct stat v;
struct dirent *ptr;
struct passwd *p;
struct group *q;
struct tm *tm;
time_t t;
char date[20];
char hour[20];
char min[20];
  dp=opendir("./");
while(ptr=readdir(dp))
{
    
  lstat(ptr->d_name,&v);
  //printf("%d %d %d\n",v.st_uid,v.st_gid,v.st_ctime);
    if(S_ISREG(v.st_mode))
       printf("-");
   else if(S_ISDIR(v.st_mode))
       printf("d");
  else if(S_ISCHR(v.st_mode))
       printf("c");
 else if(S_ISBLK(v.st_mode))
       printf("b");
  else if(S_ISFIFO(v.st_mode))
       printf("f");
else if(S_ISLNK(v.st_mode))
       printf("l");
else 
       printf("s");
//*****************FILE PERMISSIONS*****************//
           if(v.st_mode & S_IRUSR)
               printf("r");
            else
                printf("-");
           if(v.st_mode & S_IWUSR)
               printf("w");
           else
                printf("-");
           if(v.st_mode & S_IXUSR)
               printf("x");
            else
                printf("-");
           if(v.st_mode & S_IRGRP)
               printf("r");
           else   
                printf("-");
           if(v.st_mode & S_IWGRP)
               printf("w");
            else
                printf("-");
           if(v.st_mode & S_IXGRP)
               printf("x");
              else
                  printf("-");
           if(v.st_mode & S_IROTH)
               printf("r");
             else
                printf("-");
           if(v.st_mode & S_IWOTH)
               printf("w");
           else 
               printf("-");
           if(v.st_mode & S_IXOTH)
               printf("x\t");
            else
               printf("-\t");
   p=getpwuid(v.st_uid);
   q=getgrgid(v.st_gid);
   t=v.st_mtime;  
    tm=localtime(&t);
     strftime(date,sizeof(date),"%D",tm);
     strftime(hour,sizeof(hour),"%H",tm);

       strftime(min,sizeof(min),"%M",tm);

//  printf("\n%s\t",ptr->d_name);
//  printf("%d",v.st_uid);
printf("%d\t%s\t%s\t%d\t%s %s:%s\t%s\n",v.st_nlink,p->pw_name,q->gr_name,v.st_size,date,hour,min,ptr->d_name );
}
closedir(dp);
}
