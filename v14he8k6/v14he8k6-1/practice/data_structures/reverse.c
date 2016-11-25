#include"myHeaders.h"
NODE *pre=NULL;
NODE*reverse(NODE*head)
{
	NODE*temp=head,*pre1=NULL,*next=temp;
	//next=temp->link;
	/* while(temp!=NULL)
	   {
	   next=next->link;
	   temp=temp->link;
	   pre=temp;
	   temp=next;

	   }*/
	if(temp==NULL)
	{
		//pre=head;
		return pre;
	}
	else
	{
		next=next->link;
		temp->link=pre;
		pre=temp;
		temp=next;
	}     
	printf("pre::%d\n",pre->data);
	reverse(temp);

	return pre;
}
