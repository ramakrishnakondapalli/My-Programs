#include"headers.h"
main()
{
   int id;
   struct msgbuf {
              long mtype;
              char mtext[20];
                  };
  struct msgbuf v;
 id=msgget(1,IPC_CREAT|IPC_PRIVATE|0660);
  if(id==-1)
  {
     perror("msgget");
  }
  
    printf("%d %d",id,getpid());

   v.mtype=1;

   while(1)
   {
     if(msgrcv(id,&v,20,v.mtype,0)==-1)
      {
        perror("msgrcv");
        return;
      }
      if(strcmp(v.mtext,"QUIT")==0)
        return;
      printf(" %s\n",v.mtext);
    id=msgget(2,IPC_CREAT|0660);
         printf
      printf("Enter message:"); 
        gets(v.mtext);
      if(msgsnd(id,&v,20,0)==-1) 
        {
          perror("msgsnd");
          return;
       }    
       
   }


}
