#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
		int roll;
		char name[20];
		float mark;
		}STUDENT;

void print(STUDENT*,int);
void input(STUDENT**,int*);
void del(STUDENT**,int *);
void save(STUDENT*,int);
void read_file(STUDENT **,int*);
main()
{
	STUDENT *buf=NULL;
	int cnt=0;
	char ch;

read_file(&buf,&cnt);
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
		case 'i':input(&buf,&cnt);break;
		case 'p':print(buf,cnt);break;
		case 'q':return;
		case 's':save(buf,cnt);break;
		case 'd':del(&buf,&cnt);break;
		default:printf("invalid\n");
		}//switch		
	}//while

}//main

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




void print(STUDENT *buf, int cnt)
{
		int i;
	for(i=0;i<cnt;i++)
 printf("%d %f\n",(buf+i)->roll,(buf+i)->mark);
}


void input(STUDENT **bufPtr, int *cntPtr )
{
	//STUDENT *buf=*bufPtr;
	//int cnt=*cntPtr;
	(*cntPtr)++;
	//cnt++;
(*bufPtr) = realloc(*bufPtr,(*cntPtr)*sizeof(STUDENT));	
//buf=realloc(buf,cnt*sizeof(STUDENT));
	printf("enter roll:");
	//scanf("%d",&((buf+cnt-1)->roll));
scanf("%d",&(((*bufPtr)+(*cntPtr)-1)->roll));
	printf("enter mark:");
scanf("%f",&(((*bufPtr)+(*cntPtr)-1)->mark));
//*cntPtr= cnt;
//*bufPtr= buf;

}










