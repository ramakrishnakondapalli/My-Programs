#include<stdio.h>
#include<stdlib.h>
typedef struct student{
                        int data;
                        struct student *link;
                       }NODE;
NODE*insert(NODE*);
NODE*delete(NODE*);
NODE*reverse(NODE*);
NODE*sort(NODE*);
void print(NODE*);

main()
{
NODE* head=NULL;
int ch;
while(1)
{
printf("Enter choice1.insert\n2.delete\n3.print\n4.reverse\n5.sort\n");
scanf("%d",&ch);
switch(ch)
{
  case 1:head=insert(head);
          break;
  case 2: head=delete(head);
           break;
  case 3: print(head);break;
  case 4: head=reverse(head);
  case 5: head=sort(head);break;
  default: printf("Invalid choice\n");

}
}
}
NODE* insert(NODE*head)
{
NODE *temp=head,*nu;
int data;
nu=calloc(1,sizeof(NODE));
printf("Enter data\n");
scanf("%d",&nu->data);
if(head==NULL)
  { 
   nu->link=NULL;
   head=nu;
   }
else
  {
   nu->link=head;
  head=nu;   
  }



return head;

}
NODE* delete(NODE*head)
{
NODE*temp=head,*next,*pre=NULL;
int num;
   if(head==NULL)
   {
     printf("List is Empty\n");
     return;
   }
   printf("Enter data to delete\n");
   scanf("%d",&num);
   if(head->data==num)
    {
      head=head->link;
       free(temp);
       return;
    }
   else 
    {
       while((temp->link!=NULL))
        {
           if(temp->data==num)
           {
              break;
               
           }
           temp=temp->link;
         /* else
           {
              printf("Data not present\n");return;
           }*/
         }
          //   pre=temp;
         //  temp=temp->link;
        
        if(temp->link==NULL)
         {
           free(temp);
        }
        else if(temp==NULL)
           {
             printf("Data not found");
           }
        else
         {   printf("%d",temp->data);
          pre->link=temp->link;
             free(temp);
      
         }
    }

return head;
}
void print(NODE *head)
{
NODE*temp=head;
 while(temp)
 {
   printf("%d\n",temp->data);
   temp=temp->link;
 }

  
}

NODE*reverse(NODE*head)
{
NODE*temp=head,*pre=NULL,*next=NULL;
    next=temp->link;
  while(temp->link!=NULL)
  {
     next=next->link;
     temp=temp->link;
     temp->link=pre;
      pre=temp;
      temp=next;

  }
      head=pre;
  
  return head;
}

NODE*sort(NODE*head)
{
NODE*temp=head,*pre=NULL,*next=temp;
if(head==NULL)
{
 printf("List is Empty\n");
  return;
}
next=temp->link;
while(next->link!=NULL)
{
    
    if(pre->data>temp->data)
    {
         next=next->link;
        temp->link=pre;
         pre->link=next;
           temp=next;
          
    }
     // next=next->link;

}

return head;

}
