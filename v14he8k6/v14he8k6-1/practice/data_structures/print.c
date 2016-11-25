#include"myHeaders.h"
void print(NODE *head)
{
NODE*temp=head;
  while(temp)
 {
   printf("%d\n",temp->data);
   temp=temp->link;
 }

  
}
