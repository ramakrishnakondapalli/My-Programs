#include"myheadders.h"
node *add(node *head)
{
  node *nu,*temp;
  nu=malloc(sizeof(node));
  printf("Enter rollnumber:");
  scanf("%d",&(nu->roll));
  printf("Enter name:");
  scanf("%s",nu->name);
  printf("Enter mark:");
  scanf("%f",&(nu->mark));
  getchar();
      if(head==NULL)
       {
         head=nu;
         nu->link=NULL;
       }
      else
         {
          nu->link=head;
          head=nu;
         }
 return head;
}



