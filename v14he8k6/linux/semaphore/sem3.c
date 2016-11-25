#include"headers.h"
main(int argc,char **argv)
{
 int semID,setval,semval,index;
 semID=semget(1,3,IPC_CREAT|0660);
  printf("semID:%d\n",semID);
  index=atoi(argv[1]);
  setval=atoi(argv[2]);
  semval=semctl(semID,index,SETVAL,setval);
   printf("%d  %d",index,semval);


}
