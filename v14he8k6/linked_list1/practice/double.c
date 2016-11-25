#include<stdio.h>
#include<stdlib.h>
typedef struct student{
               struct student *prev;
                char name[20];
                int roll_no; 
                float marks;
                 struct student *next;
                 }NODE;
 NODE* add(NODE *);
 void print(NODE *);
 NODE* delete(NODE *);
 NODE* reverse(NODE *);
 NODE* search(NODE *);
 NODE* sort(NODE *);
main()
{
  char ch;
  NODE *head=NULL;
   while(1)
   {
     printf("Enter choice");
     scanf("%c",&ch);
      switch(ch)
            {
              case 'a': head=add(head);
                        break;

              case 'p': print(head);
                        break;

       /*       case 'd': head=delete(head);
                        break;

              case 'S': head=search(head);
                        break;

              case 's': head=sort(head);
                        break;

              case 'r': head=reverse(head);
                        break;*/
               default:printf("In valid choice");break;
    
              }
   }
}
NODE *add(NODE *head)
{
  NODE *temp=head,*prev,*next,*nu;
   nu=calloc(1,sizeof(NODE *));  
   printf("Enter name");
   scanf("%s",nu->name);
   printf("Enter roll_no");
   scanf("%d",&(nu->roll_no));
   printf("Enter marks");
   scanf("%f",&(nu->marks));
 if(head==NULL)
     {
       head=nu;
       head->next=NULL;
       head->prev=NULL;
         
     }
  else 
    {
       nu->next=head;
       nu->prev=NULL;
       head=nu;
    }
   
   return head;
}
void print(NODE *head)
{
NODE *temp=head;
while(temp)
{

printf("\nname:%s\nroll_no:%d\nmarks:%f\n ",temp->name,temp->roll_no,temp->marks);

 temp=temp->next;
}
}














