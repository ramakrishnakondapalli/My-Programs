#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct db
{
	char name[20];
	char contact[20];
	char mailId[20];
}*v=0;

int cnt=0;

void del(int i)
{
	memmove(v+i,v+i+1,(cnt-1-i)*sizeof(struct db));
	cnt--;
}
void input()
{
	v=realloc(v,sizeof(struct db)*(cnt+1));
	getchar();
	puts("enter name:");
	gets(v[cnt].name );
	puts("enter mail:");
	gets(v[cnt].mailId);
	puts("enter contact no.");
	gets(v[cnt].contact);

	cnt++;
	return;
}
void print()
{
	int i;
	printf("\n***********list************\n");
	for(i=0;i<cnt;i++)
printf("%-10s %-10s %-10s\n",v[i].name,v[i].contact,v[i].mailId);
printf("*********************************\n");
}
int search(char str[])
{
	int i;
	for(i=0;i<cnt;i++)
	{
 if(strstr(v[i].name,str)||strstr(v[i].contact,str)||strstr(v[i].mailId,str))
		break;

 //printf("%d:%s %s %s\n",i,v[i].name,v[i].contact,v[i].mailId);
	}
	if(i==cnt)  return -1;
	else
		return i;

}
void save(void)
{
	FILE *fp;
	fp=fopen("database","w");
	fwrite(v,sizeof(struct db),cnt,fp);
	fclose(fp);
}

main()
{
	int choice,i;
	char str2search[20];

	FILE *fp;

	fp=fopen("database","r");
	if(fp==0){  }
	else
	  {
		fseek(fp,0,2);
		cnt=ftell(fp)/sizeof(struct db);
		v=calloc(cnt,sizeof(struct db));
		fseek(fp,0,0);
		fread(v,sizeof(struct db),cnt,fp);
	fclose(fp);
	  }
	while(1)
	{
		printf("1:input\n");
		printf("2:del\n");
		printf("3:print\n");
		printf("4:search\n");
		printf("5:save\n");
		printf("0:quit\n");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:input();break;
		case 5:save();break;
		case 2:
		      printf("enter string:");
		      	getchar();
			scanf("%s",str2search);
			i=search(str2search);
		       if(i==-1)
			       printf("not found\n");
		       else 
			     del(i);break;
		case 3:print();break;
		case 4:
		      printf("enter string:");
		      	getchar();
			scanf("%s",str2search);
		       if(search(str2search)==-1)
			       printf("not found\n");
		       else
			       	printf("found \n");
			     
			       break;
		case 0:return;
		default:printf("invalid\n");
   
	}//switch

	}//while

}
