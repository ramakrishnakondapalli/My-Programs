#include<stdio.h>
// int a;
static int a=10;
//   int  a=10;
main()
{
 // extern int a=10;
  {
   printf("%d",a);
   f(a);
  }
}
int f(int a)
{
printf("In function a*a=%d",a*a);
  
}
