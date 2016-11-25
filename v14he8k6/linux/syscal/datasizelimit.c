#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
void f1(void)
{
static int cnt;


 char a[10240000];


cnt++;

printf("in fun: %d\n",cnt);

f1();




}

main()
{
struct rlimit v;
//print("process: %d \n",getpid());
(getrlimit(RLIMIT_DATA,&v));
printf("%u \n",(unsigned int)(v.rlim_cur));
printf("%u \n",(unsigned int)(v.rlim_max));




v.rlim_cur-=485760;
setrlimit(RLIMIT_DATA,&v);
printf("%u %d \n",(unsigned int)(v.rlim_cur),(unsigned int )v.rlim_max-(unsigned int)v.rlim_cur);



}
                                                              


