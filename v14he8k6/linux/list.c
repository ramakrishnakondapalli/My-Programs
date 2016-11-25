#include"headers.h"
main(int argc,char **argv)
{
  DIR *dp;
  struct dirent *ptr;
  if(argc==2)
    dp=opendir(argv[1]);
  else
   dp=opendir("./");
  while(ptr=readdir(dp))
   {
     printf("%s \t",ptr->d_name);
   }
  closedir(dp);

}
