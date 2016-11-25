#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct link_list{
                 int data;
                 struct link_list *link;
                }NODE;

NODE *insert(NODE *);
void print(NODE *);
NODE *delete(NODE *);
main()
{
  NODE *head=NULL;int i;
  while(1)
{
   printf("Enter your choice\n 1.insert\n2.print\n3.delete\n4.exit");
   getchar();
   scanf("%d",&i);
     switch(i)
       {  
         case 1:head=insert(head);
                  break;

         case 2:print(head);
                  break;

         case 3:head=delete(head);
                  break;

         case 4:  return;
            
      

       }
}
}
NODE *insert(NODE *head)
{
  NODE  *temp=head,*nu;
   nu=malloc(sizeof(NODE));
  printf("Enter data");
  scanf("%d",&nu->data);
   if(head==NULL)
    {
       head=nu;
       head->link=NULL;
    }
   else
     {
      nu->link=head;
      head=nu;
     }

return head;

}
void print(NODE *head)
{
 NODE *temp=head;
  if(head==NULL)
    {
      printf("list is empty");return;
    }
 while(temp)
  {
    printf("%d",temp->data);
      temp=temp->link;
  }

}
NODE *delete(NODE* head)
{
NODE *temp=head,*pre;int DATA;
 printf("Enter datato delete"); 
  scanf("%d",&DATA);
   if(head==NULL)
     {
        printf("No nodes to delete");return;
     }
   else if(temp==head)
    {
        free(head);return;
    }
    else
    {
    
  while(temp->link!=NULL)
     {
        if(temp->data==DATA)
         {
            pre->link=temp->link;
            free(temp);
         }
        pre=temp;
      temp=temp->link;
      
     }
   }


return(head);

}
