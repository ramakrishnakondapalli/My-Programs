#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
/*void f1(void)
{
static int cnt;


 char a[10240000];


cnt++;

printf("in fun: %d\n",cnt);

f1();




}*/

main()
{
struct rlimit v;
//print("process: %d \n",getpid());
(getrlimit(RLIMIT_CPU,&v));
printf("%u \n",(unsigned int)(v.rlim_cur));
printf("%u \n",(unsigned int)(v.rlim_max));




while(1)
{
v.rlim_cur-=4294967290;
setrlimit(RLIMIT_CPU,&v);

printf("%u \n",(unsigned int)(v.rlim_cur));
}
}
                                                              1,1           Top


