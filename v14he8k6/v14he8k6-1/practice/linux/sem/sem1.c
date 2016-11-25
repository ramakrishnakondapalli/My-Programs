#include<stdio.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<sys/sem.h>
#include<unistd.h>
main(int argc,char **argv)
{
int semId;
semId=semget(1,3,IPC_CREAT|0660);
if(semId==-1)
perror("semget");
printf("%d\n",semId);
int semval,index;
index=atoi(argv[1]);
semval=semctl(semId,index,GETVAL);
printf("semval:\n",semval);




}
