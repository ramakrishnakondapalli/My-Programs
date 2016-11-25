#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>
pthread_t tid1,tid2;
pthread_mutex_t m1,m2;
//pthread_init(&tid1,NULL,f1,NULL);
//pthread_init(&tid2,NULL,f2,NULL);
int v=10;
char msg1[15],msg2[15];
 void *f1(void *p)
{
while(1)
{
  printf("thread1:\n");
  printf("Enter msg1:\n");
  scanf("%s",msg1);  
  pthread_mutex_lock(&m1);
    printf("%s",msg1);
     sleep(10);
    pthread_mutex_unlock(&m1);
}
  pthread_exit(0);
}
void *f2(void *p)
{
 while(1)
{
  printf("\tthread 2:\n");
  sleep(10);
  printf("\tEnter msg2:\n");  
  scanf("%s",msg2);
  pthread_mutex_lock(&m2);
     printf("\t %s ",msg2);
  pthread_mutex_unlock(&m2);
}

pthread_exit(0);
}
main()
{

pthread_mutex_init(&m1,NULL);
pthread_mutex_init(&m2,NULL);
pthread_create(&tid1,NULL,f1,NULL);
pthread_create(&tid2,NULL,f2,NULL);


pthread_join(tid1,NULL);
pthread_join(tid2,NULL);


}
