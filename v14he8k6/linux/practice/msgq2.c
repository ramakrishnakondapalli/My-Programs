#include"headers.h"
main()
{
int id;
struct msgbuf{
             long  mtype;
             char mtext[20];
            };
struct msgbuf v;
id=msgget(1,IPC_CREAT|0600);
if(id==-1)
{
  perror("msgget");return;
}
printf("ID:%d",id);
v.mtype=22;
while(1)
{
    if(msgrcv(id,&v,20,v.mtype,0)==-1)
       {
         perror("msgrcv");return;
       }
     printf("%s",v.mtext);
    if(strcmp(v.mtext,"QUIT")==0)
      break;
     
}

}
