#include<stdio.h>
#include"myHeaders.h"
NODE *search(NODE *head)
{
   NODE *temp=head;
   int r;
   if(head==NULL)
    printf("List is empty:");
    printf("Enter rol no of record");
    scanf("%d",&r);
    while(temp)
   {
      if(temp->roll_no==r)
      {
            printf("%s %d %f",temp->name,temp->roll_no,temp->mark);
      }
      temp=temp->link;
   }
  return head;

}
