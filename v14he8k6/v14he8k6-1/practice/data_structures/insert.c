#include"myHeaders.h"
NODE* insert(NODE*head)
{
NODE*temp=head,*nu=NULL;
temp=head;
   nu=calloc(1,sizeof(NODE));
    printf("Enter roll\n");
    scanf("%d",&nu->data);
   if(head==NULL)
   {
        head=nu;
        nu->link=NULL;
     return head;
   }
   else 
    {
       while(temp->link)
           temp=temp->link;
         temp->link=nu;
           nu->link=NULL;
      }
       return head;


}

