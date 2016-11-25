#include<stdio.h>
#include"myHeaders.h"
#include<stdlib.h>
NODE *sort(NODE *head)
{
  NODE *temp=NULL,*current=NULL,*next=NULL,*size;
  int count=0,i;
  if(head==NULL)
   {
     printf("List doesn't Exists!");
     return;
   }
   if(head!=NULL)
   {
    printf("Head is not NULL");
    printf("%d",head->roll_no);
   }
    temp=calloc(1,sizeof(NODE));
    current=calloc(1,sizeof(NODE));
    next=calloc(1,sizeof(NODE));
    size=calloc(1,sizeof(NODE));
   size=head;
   while(size)
   {
      size=size->link;
       count++;
   }
  
  for(i=0;i<count;i++)  
   {
     current=head;
     next=current->link;
      while(next!=NULL)
       {
          if(current->roll_no>next->roll_no)
            {
               memmove(temp,current,sizeof(NODE));
               memmove(current,next,sizeof(NODE));
               memmove(next,temp,sizeof(NODE));
          
            }
             current=current->link;
             next=next->link;
       }

   }


}
