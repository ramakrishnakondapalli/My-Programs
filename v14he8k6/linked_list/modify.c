#include<stdio.h>
#include"myHeaders.h"
NODE *modify(NODE *head)
{
    NODE *temp=head;
    int r;
    if(head==NULL)
    {
      printf("No Record is present to modify:");
      return;
     }
    printf("Enter roll_no of reecord you want to modify\n");
    scanf("%d",&r);
    while(temp)
    {
      if((temp->roll_no)==r)
       {
           printf("Enter name:\n rol_no \n mark:");
           scanf("%s %d %f",temp->name,&(temp->roll_no),&(temp->mark));
       }
           temp=temp->link;
    }
   return head;
}
