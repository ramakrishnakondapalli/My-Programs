#include"headers.h"
main()
{
  int t;
  struct timeb v;
  ftime(&v);

   printf(" %d",v.time);
	fflush(stdout);
}
