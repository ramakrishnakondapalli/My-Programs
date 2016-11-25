#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<fcntl.h>
pthread_t tid1,tid2;
pthread_mutex_t m1,m2;

void *f1(void *p)
{
  int i;
  printf("In f1\n");
  pthread_mutex_lock(&m1);
     for(i=0;i<26;i++)
        printf("%c\n",i+65);
   pthread_mutex_unlock(&m2);

}
void *f2(void *p)
{
  int i;
  printf("In f2\n");
  pthread_mutex_lock(&m2);
  for(i=0;i<26;i++)
    printf("%d\n",i);
  pthread_mutex_unlock(&m1);
}
main()
{
  printf("In main\n");
  pthread_mutex_init(&m1,NULL);
  pthread_mutex_init(&m2,NULL);
  pthread_create(&tid1,NULL,f1,NULL);
  pthread_create(&tid2,NULL,f2,NULL);
  pthread_join(tid1,NULL);
  pthread_join(tid2,NULL);
  printf("\n");

}
