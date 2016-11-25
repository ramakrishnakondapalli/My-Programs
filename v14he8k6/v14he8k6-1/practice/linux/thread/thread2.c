#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>
pthread_t tid1,tid2,tid3;
pthread_mutex_t m1,m2,m3;
//pthread_init(&tid1,NULL,f1,NULL);
//pthread_init(&tid2,NULL,f2,NULL);
int i;
 void *f1(void *p)
{
   for(i=0;i<26;i++) {   
  pthread_mutex_lock(&m1);
    fflush(stdout);   
   printf("%c\t",i+65);
  pthread_mutex_unlock(&m2);}
  pthread_exit(0);
}
void *f2(void *p)
{
 
    for(i=0;i<26;i++){
  pthread_mutex_lock(&m2);
    fflush(stdout);   
   
   printf("%d\t",i);
  pthread_mutex_unlock(&m3);}



pthread_exit(0);
}
void *f3(void *p)
{
  
   for(i=0;i<26;i++){
  pthread_mutex_lock(&m3);
    fflush(stdout);   
     printf(" %c\t\n",i+97);
      pthread_mutex_unlock(&m1);}

  pthread_exit(0);
}
main()
{

pthread_mutex_init(&m1,NULL);
pthread_mutex_init(&m2,NULL);
pthread_mutex_init(&m3,NULL);
pthread_create(&tid1,NULL,f1,NULL);
pthread_create(&tid2,NULL,f2,NULL);
pthread_create(&tid3,NULL,f3,NULL);


pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
pthread_join(tid3,NULL);


}
