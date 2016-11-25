#include"headers.h"
struct msgbuf{
	long mtype;
	char mtext[20];
	};

main()
{
  int id;
  struct msgbuf v;
  id=msgget(2,IPC_CREAT|0600);
  if(id==-1)
  {
    perror("msgget");return;
  } 
   printf("id=%d in %d",id,msgget);

	v.mtype=1;
  while(1)
  { 
   // printf("Enter type of message you want to receive:");
   // scanf("%d",v.mtype);
    if((msgrcv(id,&v,20,v.mtype,0))==-1)
	{
       perror("msgrcv");return;
	}
      printf("%d : %s\n",getpid(),v.mtext);
   if(strcmp(v.mtext,"QUIT")==0)
        break;
  }
}

