#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/ipc.h>
main()
{

int key,id;
   id=msgget(1,IPC_CREAT|0600);
   if(id==-1)
   {
     perror("msgget");return;
   }
printf("ID:%d\n",id);
 struct msgbuf {
               long mtype;
               char mtext[20];
               };
struct msgbuf v;
v.mtype=2;
printf("Enter message:");
gets(v.mtext);
while(1)
{
if(msgsnd(id,&v,20,IPC_NOWAIT)==-1)
  {
    perror("msgsnd");
    return;
  } 
// if(strcmp(v.mtext,"QUIT")==0)
//    break; 
}



}
