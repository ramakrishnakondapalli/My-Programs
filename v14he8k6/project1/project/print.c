#include"myheadders.h"
void print(node *head)
{
  node *temp=head;
  while(temp)
      {
       printf("%d %s %0.2f\n",temp->roll,temp->name,temp->mark);
        temp=temp->link;
       }
}
