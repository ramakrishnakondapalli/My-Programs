#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<sys/select.h>
#include<sys/stat.h>
#include<dirent.h>
#include<sys/ipc.h>
#include<unistd.h>
int search_dir(char *,char *);
main()
{
	char dir[20],name[20];
	printf("Enter directory name\n");
	scanf("%s",dir);
	printf("Enter file name\n");
	scanf("%s",name);     
	search_dir(dir,name);

}
int search_dir(char *p,char *q)
{
	int n;struct stat v;
	struct dirent *ptr;DIR *dp;char str[50];
	printf("*******In %s directory*************\n",p);
	stat(p,&v);
	if(v.st_mode & S_IRUSR)
	{
		dp=opendir(p);
		if(dp==NULL)
			perror("opendir");  
	}
	else
	{
		printf("Don't have read permissions on file\n");return 1;
	}
	// printf(":::%s",p);
	while(ptr=readdir(dp))
	{
		//printf("%s\n",ptr->d_name);
		if(strcmp(ptr->d_name,q)==0)
		{
			printf("\nfound in:%s\n:%s\n",p,ptr->d_name);
			return 1;
		}
		if(ptr->d_type==4)
		{
			//printf("%s\n",ptr->d_name);
			if(ptr->d_name[0]!='.')
			{
				strcpy(str,p);
				//printf("str::::%s",str);
				strcat(str,ptr->d_name);
				//strcpy(ptr->d_name,str);
				strcat(str,"/");
				//printf("%s\n",str);
				//if(ptr->d_name[0]!='.')
				n=search_dir(str,q);
				if(n==1)
					return 1;        
			}
		}
	}



}
