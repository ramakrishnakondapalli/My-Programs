#include<stdio.h>
main()
{
 unsigned int a,b,c;
printf("Enter a:");
scanf("%d",&a);
printf("Enter bit position :");
scanf("%d",&b);
if(((0<=b)&&(b<=31))?1:printf("Wrong data Entered");)
{

  b=1<<b;
  c=a&&b;
  printf("%d",c);


}



}
