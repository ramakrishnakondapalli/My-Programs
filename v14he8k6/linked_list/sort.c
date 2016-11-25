//sort the linked list
#include"myHeaders.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
NODE *sort(NODE *head)
{
   NODE *t1=0,*t2=0,*temp=0,v,*size=NULL;
    int i,j,cnt=0;
    //temp=head;
  temp=calloc(1,sizeof(NODE));
  size=calloc(1,sizeof(NODE));
  t1=calloc(1,sizeof(NODE));
  t2=calloc(1,sizeof(NODE));
  if(head==NULL)
{
    printf("List doen't exists!");
    return;
}   
    //if(head!=NULL)
    //printf("%d",1);
    //scanf("%s",(temp->name));
    //printf("Enter rollno:");
    //scanf("%d",&(temp->roll_no));
    //printf("Enter mark:");
    //scanf("%f",&(temp->mark));
    //  size=head;
     //  while(size)
   //     {
   //       size=size->link;
  //         cnt++;
  //      }
      printf("%d",cnt);
      temp=head;
      t2=head->link;
      t1=head;
 // printf("%s %s",t1->roll_no,t2->roll_no);
 for(i=0;i<3;i++) 
 {   
    for(j=0;j<2;j++)   
     {

   if((t2->roll_no)<(t1->roll_no))
     {
        t1=t1->link;
         // temp=temp->link;
          memmove(&v,t1,sizeof(NODE));
          memmove(t1,t2,sizeof(NODE));
          memmove(t2,&v,sizeof(NODE));
     }
    /* else
    { 
       head=temp;
       prev->link=next;
       temp->link=prev;
     }*/
         printf("%s %d %f",t1->name,t1->roll_no,t1->mark);
      t2=t2->link;
      t1=t1->link;

   }
  }
  return head;
}
