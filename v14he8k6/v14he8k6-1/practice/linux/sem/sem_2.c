#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<sys/ipc.h>
main()
{
   int semval,semid,index,i,ch;
    struct sembuf v[3];
     semid=semget(1,3,IPC_CREAT|0666);
      printf("%d %d\n",semid,getpid());
       v[0].sem_num=0;v[1].sem_num=1;v[2].sem_num=2;
       v[1].sem_op=0;v[1].sem_op=0;v[1].sem_op=0;
       v[2].sem_flg=0;v[2].sem_op=0;v[2].sem_flg=0;     
     //  semop(semid,v,0); 
 
       semctl(semid,0,SETVAL,1);         
       semctl(semid,1,SETVAL,1);         
       semctl(semid,2,SETVAL,1);         
       for(i=0;i<16;i++)
        {
       semctl(semid,0,SETVAL,0);         
     
       semop(semid,&v[0],0); 
           printf("%c\t",97+i);
       semctl(semid,1,SETVAL,0);         
         }
                     
    
          for(i=0;i<16;i++)
           {
       semctl(semid,1,SETVAL,0);         
       semop(semid,&v[1],0); 
          printf("%c\t",65+i);
       semctl(semid,2,SETVAL,0);       
            }  
      
          for(i=0;i<16;i++)
            {
          semctl(semid,2,SETVAL,0);         
       semop(semid,&v[2],0); 
         printf("%c\n",48+i);
       semctl(semid,0,SETVAL,0); 
            }        





}
