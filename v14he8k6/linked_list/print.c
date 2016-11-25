#include"myHeaders.h"
void print(NODE *head)
{
   NODE *temp=head;
   //printf("%u %s %d %f",head,head->name,head->roll_no,head->mark);
	if(head==NULL)
          {
            printf("List is empty:\n");
             return;
          }
   while(temp)
   {
     printf("%s %d %f\n",temp->name,temp->roll_no,temp->mark);
      temp=temp->link;
   }
}
