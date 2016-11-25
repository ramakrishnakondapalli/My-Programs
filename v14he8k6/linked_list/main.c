#include<stdio.h>
#include<stdlib.h>
#include"myHeaders.h"
main()
{
  NODE *head=NULL;
  int i;
  char ch;
while(1)
{
  printf("\n a:add\nd:delete\np:print\nm:modify\nf:find\nS:save\nu:update\ns:sort\nq:quit\n");
	printf("enter choice:");
  scanf(" %c",&ch);
  switch(ch)
  {
   case 'a':  //printf("%s %d %f",head->name,head->roll_no,head->mark);
               //head=(NODE *)add(&head);
               (NODE *)add(&head);
                //printf("%s %d %f",head->name,head->roll_no,head->mark);
               break;
    case 'd': head=(NODE *)delete(head);
              break;
    case 'p': //printf("%s %d %f",head->name,head->roll_no,head->mark);
             print(head);
              break;
    case 'm':  head=modify(head);    
               break;
     case 'f':  head=search(head);break;
     case 'S':  save(head);break;
      case 'u':  printf("Updating list!");
                head=updatelist(head);
                 break;
     case 's': head=sort(head);break;
     case 'q':return;

  }
}
}
