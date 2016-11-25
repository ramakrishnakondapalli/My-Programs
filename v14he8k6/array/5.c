#include<stdio.h>
#include<stdlib.h>
main()
{

  char str[5][10],ch;
  printf("Enter choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 'i':insert();break;
    case 'p': print();break;

   default:printf("Enter correct choice\n");
  }

}
void insert()
{
   char str[10],*p[5];int i;
   printf("Enter name\n");
   scanf("%s",str);
   for(i=0;str[i];i++)
    {
        
    }
      str=calloc(1,i*sizeof(char));
    
}
