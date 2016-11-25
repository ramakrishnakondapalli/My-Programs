#include"headers.h"
pthread_t tid1,tid2,tid3;
pthread_mutex_t m1,m2,m3;
int i;
void *f1(void *p)
{  
   char ch='A';
  for(i=0;i<26;i++)
 {  
  pthread_mutex_lock(&m1);
  printf("%c\t",i+65);
  pthread_mutex_unlock(&m2);
  }
  pthread_exit(0);
}
void *f2(void *p)
{
  int ch=1;
  for(i=0;i<26;i++)
 {
  pthread_mutex_lock(&m2);
  printf("%d\t",ch+i);
  pthread_mutex_unlock(&m3);
 }
pthread_exit(0); 
}
void *f3(void *p)
{
  char ch='a';
 for(i=0;i<26;i++)
  {
   pthread_mutex_lock(&m3);
   printf("%c\n",i+97);
   pthread_mutex_unlock(&m1);
  }
 pthread_exit(0);
}
main()
{
  printf("In main\n");
  pthread_mutex_init(&m1,NULL);
  pthread_mutex_init(&m2,NULL);
  pthread_mutex_init(&m3,NULL);
  pthread_create(&tid1,NULL,f1,NULL);
  pthread_create(&tid2,NULL,f2,NULL);
  pthread_create(&tid3,NULL,f3,NULL);
  pthread_join(tid1,NULL);
  pthread_join(tid2,NULL);
  pthread_join(tid3,NULL);
 
 printf("\n");
}
