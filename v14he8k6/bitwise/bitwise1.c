#include<stdio.h>
main()
{
  int a,b,c;
  printf("Enter number");
  scanf("%d",&a);
  printf("Enter bit position:");
  scanf("%d",&b);
  b=1<<b;
  c=a&&b;
  printf("%d",c);


}
