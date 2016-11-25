#include"myHeaders.h"
 extern NODE *pre;
NODE* delete(NODE*head)
{
NODE*temp=head,*next;
int num;pre=NULL;
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
    }
   else 
    {
       while(temp->link!=NULL)
        {
           if(temp->data==num)
           {
              pre->link=temp->link;
              free(temp);
               return;
           }
          else
           {
              printf("Data not present\n");return;
           }
             pre=temp;
           temp=temp->link;
        }
    }

     return head;
}

