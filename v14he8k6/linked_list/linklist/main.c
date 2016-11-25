#include<stdio.h>
#include"myHeaders.c"
main()
{
   NODE *head=NULL;
   char ch;
   printf("*******Menu**********\na:add\np:print\nd:delete\nm:modify\ns:sort\nq:quit\n");
    while(1)
    {
      printf("Enter choice");
      scanf("%c",&ch);
       switch(ch)   
       {
         case 'a':head=add(head);
                  break;
         case 'p':print(head);break;
       case 'd':head=delete(head);break;
       case 'u': head=updatelist(head);break;
         case 'q':return;

       }

   }




}
