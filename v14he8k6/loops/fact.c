#include<stdio.h>
main()
{
   int a,fact=1,i;
    printf("Enter a number"); 
   scanf("%d",&a);
   while(a!=0)
  {
     fact=fact*a;
    a=a-1;
    
  }
    printf("%d",fact);
  
}
