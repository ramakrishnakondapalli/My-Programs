#include"headers.h"
main()
{
 struct utimbuf v;
 struct timeb s;
  ftime(&s);
  utime("list.c",&v);
  printf("%d %d\n",s.time,s.millitm);
  printf("%d %d",v.actime,v.modtime);


}
