#include<stdio.h>
#include<stdlib.h>
struct st{
		int data;
		struct st *next;
	}*rear,*front;
void push(int);
void pop();
void display();
int isempty();
int isfull();
#define MAX 5
int top=-1;;

main()
{
	rear=NULL;
	//head=NULL;
	int choice,num;
	while(1)
	{
	printf("1.push 	2.pop   3.Display\n");
	printf("enter ur choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("enter the data\n");
			scanf("%d",&num);
			push(num);
			break;
		case 2: pop();
			break;
		case 3:display();
			break;
		default:printf("enter a valid option \n");
	}
}
}
void display()
{

	struct st* nu=rear;
	while(nu)
	{
		printf("%d     ",nu->data);
		nu=nu->next;
	}
	printf("\n");
}
void push(int num)
{	
	struct st* nu;
	if(isfull())
	{
	nu=malloc(sizeof(struct st));
	nu->data=num;
	nu->next=rear;
	rear=nu;
	top++;
	}
	else
	{
		printf("Stack is full\n");
	}
}

void pop()
{	struct st *temp;
	if(isempty())
	{
		printf(" stack is empty\n");
	}
	else
	{	
		top--;
		temp=rear;
		rear=rear->next;
		printf("%d is pop\n",temp->data);
		free(temp);
		temp=NULL;
		
	}
}
		
	
int isempty()
{
	if(top==-1)
	return 1;
	else return 0;
}

int isfull()
{
	if(top==MAX-1)
	return 0;
	else 
	return 1;
}
