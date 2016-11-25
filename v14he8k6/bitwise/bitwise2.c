#include<stdio.h>
main()
{
  unsigned int a,b,c;
  printf("Enter a num :");
  scanf("%d",&a);
  printf("Enter bit position :");
  scanf("%d",&b);
  (0<=b<=31)? 1<<b:printf("Wrong bit position Entered");
  c=a&b;
printf("%d",c);
  
  


}
