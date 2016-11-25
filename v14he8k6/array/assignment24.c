//Fibanocci using recursion
#include<stdio.h>
main()
{
  int i,n,a=0,b=1,t;
  printf("Enter n:");
  scanf("%d",&n);
  printf("%d %d ",a,b);
  for(i=0;i<n-2;i++)
   {
     
     a=b;
     b=a+b;
     printf("%d %d",a,b);
   }

}
