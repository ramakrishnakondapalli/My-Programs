#include"myHeaders.h"
//  NODE *pre=NULL;
NODE*sort(NODE*head)
{
NODE*temp=head,*next=temp;
if(head==NULL)
{
 printf("List is Empty\n");
  return;
}
while(temp->link!=NULL)
{
    next=next->link;
    if(temp->data>next->data)
    {
        temp->link=next->link;
         next->link=temp;
          next=temp;
    }


}

return head;

}
