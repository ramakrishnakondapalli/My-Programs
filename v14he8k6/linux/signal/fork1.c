#include"myheaders.h"
main()
{
  int n;
  printf("Before P1:%d\n",getpid());
  fork();
  printf("After 1stfork :%d\n",getpid());
  fork();
  printf("After 2nd fork:%d\n",getpid());
//  fork();
//  printf("After 3rd fork:%d\n",getpid());
}
