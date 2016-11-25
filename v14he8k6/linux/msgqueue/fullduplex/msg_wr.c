#include"headers.h"
main()
{
  int id;
  struct msgbuf 
          {
           long mtype;
           char mtext[20];

          };
  struct msgbuf v;
  id=msgget(1,IPC_CREAT|0660);
   if(id==-1)
   {
      perror("msgget");
      return;
   }
  printf("Id:%d ",id);
//  printf("Enter message:");
//  v.mtext=atoi(argv[1])
//    v.mtype=1;
//   gets(v.mtext);
  while(1)
  {
   printf("Enter message:");
   gets(v.mtext);
  if(msgsnd(id,&v,20,0)==-1)
   {
      perror("msgsnd");return;
   }
   id=msgget(2,IPC_CREAT|0660);
    printf("Id:%d\n",id);
   if(msgrcv(id,&v,20,1,0)==-1)
     {
       perror("msgrcv");
        return;
     }
     if(strcmp(v.mtext,"QUIT")==0)
        break;
     printf("  %s\n",v.mtext);
 }
 
  
  
  



}
