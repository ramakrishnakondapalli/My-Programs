#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int cnt;
struct queue{
		int val;
		struct queue *next;
	};
	struct queue *rear=NULL;
	struct queue *front=NULL;
void enque(int );
void deque();
int isempty();
int isfull();
void display();

main()
{
	int choice,val;
	while(1)
	{
	printf("1. enq	2.deq	3.display\n");
	printf("enter ur choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: if(isfull())
			printf("queue is full");
			else
			{
			printf("enter the val");
			scanf("%d",&val);
			enque(val);
			}
			break;
		case 2: if(isempty())
			printf("queue is empty");
			else
			deque();
			break;
		case 3: display();
			break;
		default: printf("invalid choice\n");
		}
	}
}

int isfull()
{
	if(cnt==MAX)
	return 1;
	else
	return 0;
}

int isempty()
{
	if(front==NULL)
	return 1;
	else
	return 0;
}

void enque(int val)
{
	struct queue *nu;
	nu=malloc(sizeof(struct queue));
	nu->val=val;
	nu->next=NULL;
	if(rear==NULL)
	front=nu;
	else
	rear->next=nu;
	rear=nu;
	cnt++;
}

void deque()
{
	struct queue *temp;
	temp=front;
	printf("%d-->\n",front->val);
	front=front->next;
	free(temp);
	temp=NULL;
	
}

void display()
{
	struct queue *temp;
	temp=front;
	while(temp)
	{
		printf("%d--->",temp->val);
		temp=temp->next;
	}
	printf("\n");
}

	
	
