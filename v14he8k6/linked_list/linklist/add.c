#include"myHeaders.c"
#include<stdlib.h>
NODE *add(NODE *head)
{
   NODE *temp,*nu;
    nu=calloc(1,sizeof(NODE));
        printf("Enter name");
        scanf("%s",nu->name);
        printf("Enter roll_no");
        scanf("%d",&(nu->roll_no));
        printf("Enter marks");
        scanf("%f",&(nu->mark));
    if(head==NULL)
    {
      nu->link=NULL;
       head=nu;
       return head;
    }
  else 
    {
       nu->link=head;
        head=nu;
    }


return head;



}
