#include<stdio.h>
#include<stdlib.h>
#define MAX 5
static count;
struct stack{

            int data;
            struct stack *link;
            };
struct stack* push(struct stack*);
struct stack *pop(struct stack*);
void print(struct stack*);
main()
{
struct stack *top=NULL;
int data,i,ch;
while(1)
{
printf("Enter choice\n1.push\n2.pop\n3.print\n");
scanf("%d",&ch);
switch(ch)
    {
      case 1:top=push(top);
             break;
       case 2:top=pop(top);
              break;
       case 3:print(top);
             break;
   default: printf("Enter valid choice\n");
    }

}


}

 struct stack* push(struct stack *top)
{
struct stack *nu;
 
   if(count==MAX)
   {
      printf("Stack is overflow\n");return;
   }
   nu=malloc(sizeof(struct stack*)); 
   printf("Enter element to be inserted into stack\n");
   scanf("%d",&nu->data);
    
    if(top==NULL)
     {
       top=nu;
       top->link=NULL;
     }
   else
    {
     nu->link=top;
     top=nu;
    }
   count++;
return top;
}
struct stack* pop(struct stack*top)
{
struct stack*temp=top;

if(top==NULL)
{
printf("stack is Underflow\n");
return;
}
top=temp->link;
free(temp);
count--;
return top;
}
void print(struct stack* top)
{
struct stack*temp=top;
while(temp)
{

printf("%d\n",temp->data);
temp=temp->link;
}

}
