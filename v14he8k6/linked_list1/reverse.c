#include<stdio.h>
#include<stdlib.h>
typedef struct student{
                          char name[20];
                          int roll_no;
                          float  marks;
                         struct student *link;
                        }NODE;
NODE *input(NODE *);
NODE *print(NODE *);
NODE *reverse(NODE *);
main()
{
   NODE *head=NULL;
   int i;
   char ch;
   while(1)
   {
      printf("Enter choice:\ni:input\n p:print\n r:reverse\n q:quit\n");
      scanf(" %c",&ch);
      switch(ch)
         {
             case 'i': head=input(head);
                       break;
             case 'r': head=reverse(head);break;
             case 'p':head=print(head);break;
             case 'q': return;
         }
   }
}
NODE *input(NODE *head)
{
  NODE *temp=head,*nu;
  nu=calloc(1,sizeof(NODE));
  printf("Enter name");
getchar();
  scanf("%s",nu->name);
  printf("Enter rollno");
  scanf("%d",&nu->roll_no);
  printf("Enter marks");
  scanf("%f",&nu->marks);

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
//temp=head;
//while(temp->link!=NULL)
{
//printf(" %s %d %f",temp->name,temp->roll_no,temp->marks);
//  temp=temp->link;
 }
 
return(head);
}
NODE *print(NODE *head)
{
  NODE *temp=head;
   while(temp)
   {
     printf(" %s %d %f\n",temp->name,temp->roll_no,temp->marks);
      temp=temp->link;
   }
  return(head);
}
NODE *reverse(NODE *head)
{
  NODE  *temp=head,*nu,*prev;
//   printf("%d",head->roll_no);
   while(temp)
  { 
    
    prev=calloc(1,sizeof(NODE));
    nu=calloc(1,sizeof(NODE));
     memmove(nu,temp,sizeof(NODE));
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
           prev=temp;
         temp=temp->link;
          free(prev);
  }
   
   return(head);  
}
/*
}
NODE *print(NODE *head)
{
  NODE *temp=head;
   while(temp)
   {
     printf(" %s %d %f",temp->name,temp->roll_no,temp->marks);
      temp=temp->link;
   }
  return(head);
}
NODE *reverse(NODE *head)
{
  NODE  *temp=NULL,*nu;
   printf("%d",head->roll_no);
  for(temp=head;temp->link!=NULL;temp=temp->link)
  {
    nu=calloc(1,sizeof(NODE));
     memmove(nu,temp,sizeof(NODE));
     input(nu);
  }
  return(head);
}*/
