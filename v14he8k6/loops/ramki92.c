#include<stdio.h>

main()
{
   int a,b,c;
  printf("Enter values of a and b :");
  scanf("%d %d",&a,&b);
  c=a;
  a=b;
  b=c;

  printf("After Swapping a and b is %d %d",a,b);
}
