#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<unistd.h>
main()
{
int shmId;
shmId=shmget(1,1000,IPC_CREAT|0660);
if(shmId==-1)
perror("shmId");
char *ptr,str[20];
ptr=shmat(shmId,NULL,0);
printf("Enter msg:\n");
scanf("%s",str);
if(fork()==0)
{
   printf("In child:%d\n",getpid());
  printf("msg:%s %d",str,sizeof(ptr));
}







}
