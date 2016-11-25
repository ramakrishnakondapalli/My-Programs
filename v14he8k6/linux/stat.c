#include"headers.h"
main()
{
struct stat v;
if(stat("f1",&v)==-1)
  {
     perror("stat");
     return;
   }
   printf("%d\n",v.st_size);

   printf("%o\n",v.st_mode);



}
