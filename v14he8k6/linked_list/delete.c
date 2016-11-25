#include"myHeaders.h"
NODE *delete(NODE *head)
{
   NODE *temp=head,*pre;
    int r;
  printf("Enter roll no you want to delete:");
    scanf("%d",&r);
    while((temp->link)!=NULL)
    {
      
       if(temp->roll_no==r)
        {
         printf("%d",temp->roll_no);
         break;
        }
         pre=temp;
       temp=temp->link;

    }
     if(temp==NULL)
      {
          printf("Not found");
          return head;
      }
    if(temp==head)
     {
        head=head->link;
        free(temp);
     }
    else
     {
      pre->link=temp->link;
        free(temp);
      }

  return head;

}
