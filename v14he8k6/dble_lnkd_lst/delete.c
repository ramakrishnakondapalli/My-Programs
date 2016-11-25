#include"myheaders.h"
NODE *delete(NODE *head)
{
     NODE *temp=head,*prev,*next;int roll;
     printf("Enter roll no you weant to delete:\n");
     scanf("%d",roll);
     if(head==NULL)
      {

      }
    else if(head->roll_no==roll)
      {
          head=head->next;free(head->prev);
          return;
      }
     else
       {
          while(temp&&(temp->next!=NULL))
            {
                if(temp->roll_no==roll)
                  {
                     pre->next=temp->next;
                      free(temp);
                  }
                 pre=temp;
                 temp=remp->next;
            }

       }

    return head;


}
