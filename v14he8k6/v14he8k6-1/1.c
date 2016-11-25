#include<stdio.h>
main()
{
   int a[2][2][2] = { {{10,2},{3,4}}, {{5,6},{7,8}} };
   int *p,*q;
   p=&a[1][1][1];
   *q=***a[0];
   printf("%d",***a);
   printf("%d----",*p);
}
