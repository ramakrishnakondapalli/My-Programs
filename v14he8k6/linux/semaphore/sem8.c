#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<signal.h>
#include<unistd.h>
#include<semaphore.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include"headers.h"
main()
{
 int semId,semval,fd,i,j;
 struct sembuf v1,v2;
 char rdbuf1[20],rdbuf2[20];
       semId = semget(1,3,IPC_CREAT|0666);
       if(semId < 0)
	  perror("semget");
       semctl(semId,0,SETVAL,0);
       semctl(semId,1,SETVAL,0);
       v1.sem_num = 0;
       v1.sem_op = 0;
       v1.sem_flg = 0;
       v2.sem_num = 1;
       v2.sem_op = 0;
       v2.sem_flg = 0;
       fd = open("f1",O_RDWR);
        if(fork()==0)
         {
           printf("In child process %d\n",getpid());
           printf("Enter message\n");
           scanf("%s",rdbuf1);
          // printf("%s\n",rdbuf1);
           for(i=0;rdbuf1[i];i++)
           {
            semop(semId,&v1,1);
           semctl(semId,0,SETVAL,1);
           write(fd,&rdbuf1[i],1);
           printf("%c\n",rdbuf1[i]);
           semctl(semId,1,SETVAL,0);
           }
         }
         else
         {
           printf("In Parent process\n");
           printf("Enter message2\n");
           scanf("%s",rdbuf2);
          // printf("%s\n",rdbuf2);
           for(j=0;rdbuf2[j];j++)
           {
           semop(semId,&v2,1);
           semctl(semId,1,SETVAL,1);
           write(fd,&rdbuf2[j],1);
           printf("%c\n",rdbuf1[j]);
           semctl(semId,0,SETVAL,0);
           }
         }

close(fd);
}
