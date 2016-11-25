#include<stdio.h>
#include<stdlib.h>
typedef struct student{
                char name[20];
                int roll_no;
                float marks;
                struct student *link;
              }NODE;
int cnt;
NODE *input(NODE *);
NODE *print(NODE *);
NODE *delete(NODE *);
main()
{
  NODE *head;
//extern head;
  char ch;
while(1)
{
 printf("\nEnter your choice\n i:input\n d:delete\n p:print\n q:quit\n");
 scanf("%c",&ch);
 printf("%c",ch);
    switch(ch)
       {
          case 'i':head=input(head);
                     break;
          case 'p': head=print(head);
                     break;
          case 'd':head=delete(head);
                     break;
          case 'q':return;

       }
 }  
}
NODE *input(NODE *head)
{
  NODE *temp=head,*nu;
   nu=calloc(1,sizeof(NODE));
  int i; 
  printf("Enter name");
  scanf("%s",nu->name);
  printf("Enter roll no");
  scanf("%d",&(nu->roll_no));
  printf("Enter marks");
  scanf("%f",&(nu->marks));
   for(i=0;i<cnt-1;i++)
   {
      temp=temp->link;
   }
   if(head==NULL)
    {
       head=nu;
       head->link=head;
         cnt++;
       printf("%d",cnt);
    }
   else
    {
       nu->link=head;
        temp->link=nu;
        head=nu;
          cnt++;
      printf("%d",cnt);
    }
  for(i=0;i<cnt;i++)
  {
   printf(" %s %d %f",nu->name,nu->roll_no,nu->marks);  
   nu=nu->link;
  }  
 return(head);
}
NODE *delete(NODE *head)
{
  NODE *temp=head,*pre1=NULL,*pre=NULL,*temp1=NULL;
   int r,i;char name[20];
  temp=calloc(1,sizeof(NODE));
   pre=calloc(1,sizeof(NODE));
   printf(" %d ",temp->roll_no);
   printf("Enter roll no to delete:");
   scanf(" %d ",&r);
    printf(" %d ",r);
   if(head==NULL)
   {
     printf("No list to delete:");
     return;
   }
  printf(" %d ",head->roll_no);
   while(temp->link!=head)
    {  
      if(temp->roll_no==r)
         {
             pre1=pre;
             temp1=temp;       
         }
         pre=temp;
         temp=temp->link;
     
    if(temp->roll_no==r)
     {
      if(temp==head)
         {
           free(temp);
           head=NULL;return head;
         }
        pre->link=head;
         free(temp);
      }
     else if(temp!=head)
      {
         head=head->link;
         temp->link=head;
         free(temp);
      }
     else if(temp!=NULL)
       {
          printf("Data not found");
       }
     else
       {
          pre->link=temp1->link;
          free(temp1);
        }
   }
    return(head);
}
NODE* print(NODE *head)
{
  NODE *temp=head;
  int n=cnt;
   while(n)
    {
          
       printf("\n%s %d %f",temp->name,temp->roll_no,temp->marks);
         temp=temp->link;
          n--;    
    }
   
  return(head);

}
