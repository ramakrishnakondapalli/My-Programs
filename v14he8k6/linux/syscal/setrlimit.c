#include"myheaders.h"
main()
{

 struct rlimit v;
printf("Process :%d \n",getpid());
if(getrlimit(RLIMIT_STACK,&v)==-1)
   {
     perror("getrlimit");
      return;
   }
   v.rlim_cur*=5;
   if(setrlimit(RLIMIT_STACK,&v)==-1)
      perror("setrlimit");
   else
   printf("limit updated");
   f1();
}
void f1(void)
{
  static int cnt;
  char a[1000000];
   cnt++;
  printf("In fi cnt:%d\n",cnt);
   if(cnt<=10)
    f1();

}
