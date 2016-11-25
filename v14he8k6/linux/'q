#include"headers.h"
#include<pwd.h>
#include<dirent.h>
main()
{
DIR *dp;
char d_name[20];
struct dirent *ptr;
struct stat v;
struct passwd *p;
dp=opendir("./");
while(ptr=readdir(dp))
{
  lstat("ptr->d_name",&v);
 p=getpwuid(v.st_uid);
  
   
   printf("\n%s\t %d\t %d\t %d\t %s\t %s\t",p->pw_name,p->pw_passwd,p->pw_uid,p->pw_gid,p->pw_dir,p->pw_shell);
   printf("%s\n",ptr->d_name);

}
closedir(dp);

}
