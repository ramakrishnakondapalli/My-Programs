#include"headers.h"
main(int argc,char **argv)
{
 int semID,Index,semval;
 semID=semget(1,3,IPC_CREAT|0660);
  printf("semID:%d\n",semID);
  Index=atoi(argv[1]);
  semval=semctl(semID,Index,GETVAL);
   printf("%d  %d",index,semval);


}
