#include"myheadders.h"
node *del(node *head)
{
 if(head==NULL)
     {
     printf("list is empty\n");
     return head;
     }
 int r;
 node *temp,*prev;
 printf("Enter the roll number you want to delete:");
 scanf("%d",&r);
 getchar();
 temp=head;
 while(temp)
  {
    if(temp->roll==r)
     break;
     prev=temp;
     temp=temp->link;
  }
  if(temp==NULL)
   {
    printf("Not found\n");
    return head;
   }
if(temp==head)
  {
   head=head->link;
   free(temp);
  }
else
  {
    prev->link=temp->link;
    free(temp);
  }
return head;
}
  

 
    

   
