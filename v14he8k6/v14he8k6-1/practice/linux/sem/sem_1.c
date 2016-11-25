#include<stdio.h>
#include<sys/sem.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
main()
{
int semid;
stuct seminfo v;
semid=semget(1,3,IPC_CREAT|0660);
if(semid==-1)
perror("semget");
printf("semid:%d",semid);
//semctl(semid,0,SEM_INFO,1);
semctl(semid,0,GETVAL,1);
printf("%d",semid);





}
