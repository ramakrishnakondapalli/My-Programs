#include"headers.h"
main(int argc,char **argv)
{
  int sfd,cfd,ret;
   char rdbuf[100];
  // int p[2];
  // pipe(p);
    sfd=socket(AF_INET,SOCK_STREAM,0);
     if(sfd<0)
      {
          perror("socket");return;
      }
     int on=1;
    if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,&on,sizeof(on))<0)
      {
           perror("setsockopt");return;
      }
      struct sockaddr_in saddr;
      saddr.sin_family=AF_INET;
      saddr.sin_port=htons(atoi(argv[1]));
      saddr.sin_addr.s_addr=inet_addr(argv[2]);
 if(connect(sfd,(struct sockaddr *)&saddr,sizeof(saddr))<0)
        {
               perror("connect");
               return;
        }
      printf("connect1 success\n");
     while(1)
      {
        printf("client1:");
        printf("Enter msg1: ");
	__fpurge(stdin);
         gets(rdbuf);
        ret=send(sfd,rdbuf,100,0);
         if(strcmp(rdbuf,"quit")==0)
            {
               break;
             }
          if(ret==-1)
           {   
		perror("send"); break;
	   }
          if(ret==0)
	  {
               printf("server terminated\n");
		break;
	  }
   
             //   printf("%s\n",rdbuf);
    //  close(p[0]);
      //write(p[1],&rdbuf,20);
       // sleep(1);
    }
     
}
   //printf("client 2:");
 /* 
  else
    {
     cfd=socket(AF_INET,SOCK_STREAM,0);
     if(cfd<0)
      {
            perror("socket");
              return;
      }
      int opt=1;
     if(setsockopt(cfd,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt))<0)
      {
           perror("setsockopt");return;
      }
   char wrbuf[100];
  struct sockaddr_in caddr;
     caddr.sin_family=AF_INET;
     caddr.sin_port=htons(atoi(argv[1]));
     caddr.sin_addr.s_addr=inet_addr(argv[3]);
    if(connect(cfd,(const struct sockaddr *)&caddr,sizeof(caddr))<0)
       {
              perror("connect");return;
       }
       printf("connect 2 success\n");
     while(1)
     {
       printf("client2:");
       printf("Enter msg2:");
       gets(wrbuf);  
         if(strcmp(wrbuf,"quit")==0)
         {
            exit(0);
         }
        ret=send(cfd,wrbuf,100,0);
         if(ret==-1)
            perror("send");
          if(ret==0)
            printf("server terminated abnormally\n");
       close(p[1]);
       read(p[0],&wrbuf,20);
       printf("%s",wrbuf);
     // sleep(1);
     }
   // close(cfd);
    close(sfd);
  }
}
*/
