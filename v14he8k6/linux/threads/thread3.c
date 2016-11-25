#include"headers.h"
pthread_t tid1,tid2;
pthread_mutex_t m1,m2;
int fd;
 char rdbuf[20],rdbuf1[20],rdbuf2[20];
void f1(void )
{

 while(1)
 {  
  printf("in f1...%d\n",getpid());
  printf("Enter message:");
  gets(rdbuf1);
  if(strcmp(rdbuf1,"QUIT")==0)
  {
   break;
  }
pthread_mutex_lock(&m1); 
 write(fd,rdbuf1,7);
pthread_mutex_unlock(&m1);
  }
//  while(1);
}
void f2(void )
{
  
 while(1)
 {
  printf("in f2.....%d",getpid());
  printf("Enter message:");
  gets(rdbuf2);
  if(strcmp(rdbuf2,"QUIT")==0)
  {
    break;
  } 
pthread_mutex_lock(&m2);
 write(fd,rdbuf2,10);
pthread_mutex_unlock(&m2);  
 }
//  printf("%s",rdbuf2);
//   while(1);
//  close(fd);
}
main()
{
  
  pthread_create(&tid1,NULL,f1,NULL);
  pthread_create(&tid2,NULL,f2,NULL);
fd=open("f1",O_RDWR);
//   printf("Enter message:");
//   gets(rdbuf);
 pthread_mutex_init(&m1,NULL);
 pthread_mutex_init(&m2,NULL);
  write(fd,rdbuf,4);
   while(1);
   close(fd);
}
