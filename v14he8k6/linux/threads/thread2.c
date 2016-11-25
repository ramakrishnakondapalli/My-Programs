#include"headers.h"
pthread_t tid1,tid2;
void f1(void)
{
 printf("In thread1:%u",pthread_self());
  sleep(3);
  printf("Thread1 exiting....\n");
}
void f2(void)
{
  printf("In Thread2:%u",pthread_self());
  sleep(1);
  printf("Thread 2 exiting.....\n");
}
main()
{
  printf("In main\n");
  pthread_create(&tid1,NULL,f1,NULL);
  pthread_create(&tid2,NULL,f2,NULL);
  printf("2 Threads created\n");
  while(1);
}
