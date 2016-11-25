#include"headers.h"
static int a[100],*p;
main()
{
 int i,*q;
struct rlimit v;
//if(setrlimit(RLIMIT_DATA,&v)==-1)
{
  //perror("setrlimit");
}
//else
{
 if(getrlimit(RLIMIT_DATA,&v)==-1)
{
   perror("getrlimit");
    return;
}
  //  v.rlim_cur=1;
     printf("%d\n",(unsigned int)v.rlim_max);
    v.rlim_max=10;
    p=malloc(5*sizeof(int));
  printf("limit updated from %u to %u\n",(unsigned int)v.rlim_cur,(unsigned int)v.rlim_max);
 for(i=0;i<100000;i++)
 printf(" %d %d %d %u %d",a[i],*p,i,&a[i],&a[i]-p);
}

}
