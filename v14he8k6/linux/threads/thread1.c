#include"headers.h"
pthread_t tid1,tid2;
void *f1(void *p)
{
  printf("in f2...%d\n",getpid());
  while(1);
}
void *f2(void *p)
{
  printf("in f2.....%d",getpid());
   while(1);
}
main()
{
   
  pthread_create(&tid1,NULL,f1,NULL);
  pthread_create(&tid2,NULL,f2,NULL);
   while(1);
}
