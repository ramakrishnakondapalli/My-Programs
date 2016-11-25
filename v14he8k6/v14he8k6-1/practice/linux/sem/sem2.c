#include<stdio.h>
#include<stdlib.h>
#include<sys/sem.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<unistd.h>
main()
{
 struct sembuf v;
int semId,semval,index,i;
 semId=semget(1,3,IPC_CREAT|0660);
  if(semId==-1)
    perror("semget");

  semctl(semId,1,SETVAL,0);
  semctl(semId,2,SETVAL,0);

    v.sem_num=0;
    v.sem_op=0;
    v.sem_flg=0;
   

 for(i=0;i<26;i++)
{
semctl(semId,1,SETVAL,0); 
 semop(semId,&v,1);
  printf("%c",i+65);
 semctl(semId,0,SETVAL,0);
}
 
    v.sem_num=1;
    v.sem_op=0;
    v.sem_flg=0;
   
//  semop(semId,&v,1);
 for(i=0;i<26;i++)
{
semctl(semId,2,SETVAL,0); 
  semop(semId,&v,1);
 printf(" %d",i);
//  semop(semId,&v,1);
 semctl(semId,1,SETVAL,0);
}

    v.sem_num=2;
    v.sem_op=0;
    v.sem_flg=0;
   
//  semop(semId,&v,1);
 for(i=0;i<26;i++)
{
semctl(semId,0,SETVAL,0); 
  semop(semId,&v,1); 
 printf("\t%c",i+97);
//  semop(semId,&v,1);
 semctl(semId,2,SETVAL,0);
}

 


}
