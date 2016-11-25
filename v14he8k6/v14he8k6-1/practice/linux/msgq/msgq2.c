#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<unistd.h>
main()
{
int msgId;
 msgId=msgget(1,IPC_CREAT|0660); 
  printf("%d",msgId);
  if(msgId==-1)
   perror("msgget");
char str[20];
struct msgbuf {

              long mtype;
              char mtext[20];
              }v;
while(1)
{
printf("Enter type\n");
scanf("%d ",&v.mtype);  
if(msgrcv(msgId,&v,20,v.mtype,0)==-1)
perror("msgrcv");
//strcpy(str,v.mtext);
fflush(stdout);
printf(" %s",v.mtext);
}


}
