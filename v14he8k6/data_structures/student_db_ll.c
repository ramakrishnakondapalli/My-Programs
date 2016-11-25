#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
		int roll;
		char name[20];
		float mark;
		struct student *link;
		}STUDENT;

void print(STUDENT*);
STUDENT* input(STUDENT*);
//void del(STUDENT**,int *);
//void save(STUDENT*,int);
//void read_file(STUDENT **,int*);
main()
{
	STUDENT *head=NULL;
	char ch;

//read_file(&buf,&cnt);
	while(1)
	{	
		printf("\n***menu***\n");
		printf("i:input\n");
		printf("d:del\n");
		printf("p:print\n");
		printf("s:save\n");
		printf("q:quit\n");
		printf("enter ur choice:");
		scanf(" %c",&ch);
		switch(ch)
		{
		case 'i':head=input(head);break;
		case 'p':print(head);break;
		case 'q':return;
		case 's'://save(buf,cnt);break;
		case 'd'://del(&buf,&cnt);break;
		default:printf("invalid\n");
		}//switch		
	}//while

}//main

/*
void read_file(STUDENT **bufPtr,int *cntPtr)
{
///open the datafile, and build the database-buf
//find the size, allocate memory
//copy the file-data into dynamic-block
//update the actual argument...
	FILE *fp;
	int cnt;
	STUDENT *buf;
	fp=fopen("student.dat","r");
		
	fseek(fp,0,2);
	cnt=ftell(fp)/sizeof(STUDENT);
	
	buf=calloc(cnt,sizeof(STUDENT));
	rewind(fp);
	fread(buf,sizeof(STUDENT),cnt,fp);
	fclose(fp);
	*bufPtr= buf;
	*cntPtr= cnt;
}

void save(STUDENT *buf,int cnt)
{
	FILE *fp;
	fp=fopen("student.dat","w");
	fwrite(buf,sizeof(STUDENT),cnt,fp);
	fclose(fp);
}


void del(STUDENT **bufPtr,int *cntPtr)
{
	int roll2Delete;
	int cnt=*cntPtr;
	STUDENT *temp=*bufPtr;
	printf("enter roll to delete:");
	scanf("%d",&roll2Delete);	
	while(cnt--)
	{
		if(temp->roll == roll2Delete)
			break;
	temp++;
	}

if(cnt==-1)
{	printf("record not found\n");
		return;
}

	memmove(temp,temp+1,cnt*sizeof(STUDENT));
	--(*cntPtr);
(*bufPtr)=realloc(*bufPtr,(*cntPtr)*sizeof(STUDENT));

}

*/


void print(STUDENT *ptr)
{
while(ptr)
{
 printf("%d %f\n",ptr->roll,ptr->mark);
	ptr=ptr->link;
}
}


STUDENT *input(STUDENT *head)
{
///allocate memory, input data, link to head
	STUDENT *nu,*temp;
	nu=malloc(sizeof(STUDENT));
	printf("enter roll:");
	scanf("%d",&(nu->roll));
	printf("enter mark:");
	scanf("%f",&(nu->mark));

/////where to link the nu node to be decided.
	if(head==NULL)
	{//list is empty...
///the nu node, will be only one, will be the first,,, and also the last....
		nu->link=head;
		head=nu;
	}
	else if(nu->roll < head->roll)
	{
		nu->link=head;
		head=nu;
	}
	else
	{
		
		temp=head;
while(temp->link && (temp->link->roll<nu->roll))
		{
		temp=temp->link;
		}
		nu->link=temp->link; 
		temp->link=nu;
	}
	return head;
}










