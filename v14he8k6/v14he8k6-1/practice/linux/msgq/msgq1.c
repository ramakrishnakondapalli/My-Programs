#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<unistd.h>
main(int argc,char **argv)
{
int msgId;char str[20];
msgId=msgget(1,IPC_CREAT|0660);
if(msgId==-1)
  perror("msgget");
else
 printf("%d  %d",msgId,getpid());
struct msgbuf{
    long mtype;
     char mtext[20];
        } v;
//v.mtype=atoi(argv[1]);

while(1)
{
printf("Enter msg:");
scanf("%s",str);
printf("Enter type");
scanf("%d",&v.mtype);
msgsnd(msgId,&v,20,0);
if(strcmp(str,"quit")==0)
break;
}
while(1)
{
printf("Enter type of msg you want to read\n");
scanf("%d ",&v.mtype);
if(msgrcv(msgId,&v,20,v.mtype,IPC_NOWAIT)==-1)
perror("msgrcv");
printf("%s",v.mtext);
}
}
