//semop operation.......wait for zero.....untill semvalue is zero it blocks the process
#include"headers.h"
main()
{
  int semID;
  struct sembuf v;
  semID=semget(1,3,IPC_CREAT|0660);
  printf("%d %d",semID,getpid());
  v.sem_num=0;
  v.sem_op=0;
  v.sem_flg=0;//no specific flag choosen
   semctl(semID,1,SETVAL,1);
  printf("about to pend on semaphore:\n");    
    semop(semID,&v,1);
    printf("After semaphore in criticcal region\n");



}
