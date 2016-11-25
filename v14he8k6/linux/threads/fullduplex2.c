#include"headers.h"
pthread_t tid1,tid2;
void *f1(void *p)
{
int fd1;
char rdbuf1[50];
fd1=open("fifo1",O_RDWR);

  while(1)
{
  read(fd1,rdbuf1,20);
   puts(rdbuf1);
}
close(fd1);
}

void *f2(void *p)
{
int fd2;
char rdbuf2[50];
fd2=open("fifo2",O_RDWR);
while(1)
{
    printf("Enter mesage:");
    gets(rdbuf2);
   write(fd2,rdbuf2,strlen(rdbuf2)+1);
}
close(fd2);
}

main()
{
printf("In main\n");
pthread_create(&tid1,NULL,f1,NULL);
pthread_create(&tid2,NULL,f2,NULL);
pthread_join(tid1,NULL);
pthread_join(tid1,NULL);
pthread_exit(0);

}
