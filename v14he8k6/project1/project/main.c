#include"myheadders.h"
main()
{
 node *head=0;
 char choice;
head=(node*)update_list(head);
while(1)
{
   printf("\n**********menu**********\n");
   printf("a:add\np:print\nd:delete\ns:save\nq:quit");
   printf("\nEnter your choice:");
   scanf("%c",&choice);
   getchar();
   switch(choice)
        {
          case 'a':head=(node*)add(head);
                   break;
          case 'p':print(head);
                   break;
          case 'd':head=(node*)del(head);
                   break;
          case 's':save(head);
                   break;
          case 'q':return;
          default:printf("Invalid cchoice\n");
        }//switch
}//while
}//main
               
 
 
