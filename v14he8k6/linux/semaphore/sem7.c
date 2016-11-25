#include"headers.h"
main()
{
int id,val;
	id = semget(1,3,IPC_CREAT|0666);
	if(id<0)
 	 perror("semget");
        printf("%d\n",id);
  	val=semctl(id,0,GETVAL);
	printf("%d\n",val);
	semctl(id,0,SETVAL,1);
  	val=semctl(id,0,GETVAL);
	printf("%d\n",val);

}
