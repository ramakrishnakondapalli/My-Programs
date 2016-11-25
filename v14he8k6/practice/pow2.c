#include<stdio.h>
main()
{
  int c=1,i,p,num;
  printf("Enter number:");
  scanf("%d",&num);
  p=num;
  while(num>0)
  {
    c=c<<1;
    if(c==p)
      {
         break;
       }
     else
       {
         num--;
        }
  }
   if(c==p)
    {
          printf("Given number is powerof 2\n");
    }
  else
    {
       printf("given number is not powerof 2\n");
     }

  









}
