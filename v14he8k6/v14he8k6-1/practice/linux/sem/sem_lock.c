#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/sem.h>
#include<sys/ipc.h>
main()
{
	struct sembuf buf;
	int shmId,semId;
	char ch='A',*ptr;
	shmId=shmget(11,1,IPC_CREAT|0600);
	semId=semget(11,1,IPC_CREAT|0600);
	ptr=shmat(shmId,0,0);
	printf("process %d about to write on shared memory\n",getpid());
	printf("enter to Write on common memory\n");
	getchar();
		buf.sem_num=0;buf.sem_op=0; buf.sem_flg=0;
	printf("trying to aquire lock...\n");
	semop(semId,&buf,1);
	   semctl(semId,0,SETVAL,1);
	printf("process %d is writing.. having Exclsive access\n",getpid());
	while(ch<='Z')
	{
		*ptr = ch;
		ch++;
		sleep(1);
	}
	printf("WRITING done.. Leaving the shared memory..Exclusive access\n");
	semctl(semId,0,SETVAL,0);
	shmdt(ptr);
	printf("process exited\n");
}
