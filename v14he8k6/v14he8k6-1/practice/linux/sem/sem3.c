#include<stdio.h>
#include<stdlib.h>
//#include<sys/ipc.h>
//#include<sys/sem.h>
//#include<sys/types.h>
#include<semaphore.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<signal.h>

main()
{
int semId,v;
sem_t s;
//semId=sem_init(&s,1,1);
  if(semId==-1)
   perror("semphoreinitialisation");
if(fork()==0)
{
sem_wait(&s);
printf("sem locked \nv:%d",v++);
}
else
{
sem_post(&s);
printf("sem unlocked\nv:%d",v++);
}





}
