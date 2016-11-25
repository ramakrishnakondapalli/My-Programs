#include<stdio.h>
main()
{
  int *p,i=1;
  p=f1();
  printf("\n%d",*p);

}
int *f1()
 {
   int a;
   a=5;
   printf("In f1 a=%d\n",a);
   ++a;
   printf("%d",a);
   return(&a);

 }
