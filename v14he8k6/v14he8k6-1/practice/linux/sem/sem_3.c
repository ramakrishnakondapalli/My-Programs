#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<sys/ipc.h>
main()
{
	int semval,semid,index,i,ch=30;
	struct sembuf v[3];
	semid=semget(1,3,IPC_CREAT|0666);
	printf("%d %d\n",semid,getpid());
	v[0].sem_num=0;v[1].sem_num=1;v[2].sem_num=2;
	v[1].sem_op=0;v[1].sem_op=0;v[1].sem_op=0;
	v[2].sem_flg=0;v[2].sem_op=0;v[2].sem_flg=0;     
	//  semop(semid,v,0); 
	if(fork())
	{
		//printf("Enter to inc variable\n");
		getchar();
		while(1){
			printf("parent is ion critical section\n",getpid());
			printf("Acquiring Lock\n");
			semop(semid,&v[0],1);
			semctl(semid,0,SETVAL,1);ch++;
			printf("chaged value:::%d",ch);
			printf("parent is Releasing Lock\n");

			semctl(semid,0,SETVAL,0);
                           sleep(2);

		}
          }
		else
		{
			while(1){
				printf("child %d is ion critical section\n",getpid());
				printf("Acquiring Lock\n");
				semop(semid,&v[0],1);
				semctl(semid,0,SETVAL,1);ch++;
				printf("chaged value:::%d",ch);
				printf("child  is Releasing Lock\n");

				semctl(semid,0,SETVAL,0);sleep(2);
			}       
		} 

	}