#include"headers.h"
main()
{
int semID;

 semID=semget(1,1,IPC_CREAT|0660);
  
 printf("%d %d\n",semID,getpid());


}
