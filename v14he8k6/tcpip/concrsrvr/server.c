#include"headers.h"
#include<strings.h>
main(int argc,char **argv)
{
	int sfd,cfd,ret,fd;
	char buff[100],wrbuf[100];
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd==-1)
	{
		perror("socket");return;
	}
	int val=1;
	if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,&val,4)<0)
	{perror("setsocketopt"); return; }
	puts("set sockopt success\n");

	struct sockaddr_in  saddr;
	saddr.sin_family=AF_INET;
	saddr.sin_port=htons(atoi(argv[1]));
	saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	if(bind(sfd,(struct sockaddr *)&saddr,sizeof(saddr))<0)
	{
		perror("bind");return;
	}
	puts("creating socket address queue:\n");
	if(listen(sfd,1)<0)
	{
		perror("listen");return;
	} 
agn:	while(1)
	{
		struct sockaddr_in caddr;
		int clen=sizeof(caddr);
		//  if(fork()==0) 
		{
			puts("Wating to accept connection with client.. .");
			cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
			if(cfd<0)
			{
				perror("cfd");
				return;
			}
			puts("connection1 success\n");
			if(fork()==0)
			{
			while(1)
			{
				ret=recv(cfd,buff,100,0);
				if(ret<0)
			  	{	
					perror("recv");
					break;
				}
				if(ret==0)
				{
					printf("client1 abnormally terminated:\n");
					return;
				}

				if(strcmp(buff,"quit")==0)
				{
					printf("client1 terminated\n");break;
				}
				printf("client1: %s\n",buff);
			}
			}
			else
			{
				goto agn;
			}
		}
	}
}
// printf("Enter msg for client:\n");
/*        if(fork())
	  {
	  fd=accept(sfd,(struct sockaddr *)&caddr,&clen);
	  if(fd<0)
	  {
	  perror("cfd");
	  return;
	  }
	  puts("connection2 success\n");
	  while(1)
	  {
	  ret=recv(fd,wrbuf,100,0);
	  if(ret<0)
	  perror("recv`");
	truct sockaddr_in caddr;
                int clen=sizeof(caddr);
                //  if(fork()==0) 
                {
                        puts("Wating to accept connection with client.. .");
                        cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
                        if(cfd<0)
                        {
                                perror("cfd");
                                return;
                        }
                        puts("connection1 success\n");
                        if(fork()==0)
                        {
                        while(1)
                        {
                                ret=recv(cfd,buff,100,0);
                                if(ret<0)
                                {
                                        perror("recv");
                                        break;
                                }
                                if(ret==0)
                                {
                                        printf("client1 abnormally terminated:\n");
                                        return;
                                }

                                                                              32,1-8        36%

 else if(ret==0){
	  printf("client2 terminated abnormally:\n");return;}
	  else
	  printf("client2:%s\n",wrbuf);
	  if(strcmp(wrbuf,"quit")==0)
	  {
	  printf("client2 terminated");break;
	  } 
	  }            
	  close(fd);
	  }
	  close(sfd);
	  }*/






