//process synchronisation using semaphore
#include"headers.h"
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
//sem_init(&v,1,1);
main()
{
  int semID;
  struct sembuf v;
   
   semID=semget(1,3,IPC_CREAT|0660);
   printf("semID:%d\n",semID);
   semctl(semID,0,SETVAL,0);
   semctl(semID,1,SETVAL,0);
  if(fork()==0)
   {int fd,i;
  char rdbuf1[20];
   fd=open("f1",O_WRONLY|O_CREAT|O_APPEND,0660);
     
       v.sem_num=0;
       v.sem_op=0;
       v.sem_flg=0;
     printf("About to pend in child\n");
  
     printf("In child:%d\n",getpid());
     printf("Enter message:\n");
     gets(rdbuf1);
	printf("%s\n",rdbuf1);
     for(i=0;rdbuf1[i];i++)
     {
      semop(semID,&v,1);
     semctl(semID,0,SETVAL,1);
     write(fd,&(rdbuf1[i]),1);
     semctl(semID,1,SETVAL,0);
     }
   }
   else
  {
	int fd,i;
  char rdbuf2[20];
   fd=open("f1",O_WRONLY|O_CREAT|O_APPEND,0660);
 
       v.sem_num=1;
       v.sem_op=0;
       v.sem_flg=0;
     printf("\nIn parent %d",getpid());
     printf("\nEnter message:");
     gets(rdbuf2);
	printf("%s\n",rdbuf2);
    for(i=0;rdbuf2[i];i++)
   {
     semop(semID,&v,1);
     semctl(semID,1,SETVAL,1);

     write(fd,&(rdbuf2[i]),1);
     semctl(semID,0,SETVAL,0);
     printf("%d",i);
   }
}
 }


