#include"headers.h"
main()
{  
   int i,semID;
   struct sembuf v;
   semID=semget(1,3,IPC_CREAT|0660);
   semctl(semID,0,SETVAL,0);
   semctl(semID,1,SETVAL,0);
   semctl(semID,2,SETVAL,0);
   if(fork()==0) 
   {
    v.sem_num=0;
    v.sem_op=0;
    v.sem_flg=0;
   
  for(i=0;i<26;i++)
   {  

    semop(semID,&v,1);
    semctl(semID,0,SETVAL,1);
    printf("% c\t",i+65);
	fflush(stdout);
    semctl(semID,1,SETVAL,0);
   }
 }
 else if(fork()==0)
  {
     v.sem_num=1;
     v.sem_op=0;
     v.sem_flg=0;
    
   for(i=0;i<26;i++)
   {
    semop(semID,&v,1);
    semctl(semID,1,SETVAL,1);
    printf(" %d\t",i+1);
	fflush(stdout);
    semctl(semID,2,SETVAL,0);
   }
 }
  else
  {
    v.sem_num=2;
    v.sem_op=0;
    v.sem_flg=0;
   
   for(i=0;i<26;i++)
    {
     semop(semID,&v,1);
     semctl(semID,2,SETVAL,1);
     printf(" %c\n",i+97);
	fflush(stdout);
     semctl(semID,0,SETVAL,0);
    }
  }
}

