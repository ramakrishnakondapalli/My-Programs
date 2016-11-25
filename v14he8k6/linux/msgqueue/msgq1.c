#include"headers.h"
struct msgbuf {long mtype;
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
	printf("enter msg:");
	gets(v.mtext);
    if((msgsnd(id,&v,20,IPC_NOWAIT))==-1)//ifmsgsnd failthen immeadiately return
	{
       perror("msgsnd");return;
	}
      //printf("%d : %s\n",getpid(),v.mtext);
   if(strcmp(v.mtext,"QUIT")==0)
        break;
  }
}

