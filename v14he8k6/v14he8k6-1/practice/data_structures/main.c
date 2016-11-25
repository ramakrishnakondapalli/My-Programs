#include"myHeaders.h"
main()
{
NODE* head=NULL;
int ch;
while(1)
{
printf("Enter choice\n1.insert\n2.delete\n3.print\n4.reverse\n5.sort\n");
scanf("%d",&ch);
switch(ch)
{
  case 1:head=insert(head);
          break;
  case 2: head=delete(head);
           break;
  case 3: print(head);break;
  case 4: head=reverse(head);break;
  case 5: head=sort(head);break;
  default: printf("Invalid choice\n");

}
}
}
