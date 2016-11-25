#include<stdio.h>
int func(int );
int func2(int );
int a,b;
int func(int a)
{
    printf("IN func 1");
  printf("Enter value of a :");
  scanf("%d",&a);
  printf("Value of a is: %d",a);
    func2(5);
exit(0);
}
int func2(int b)
{
  printf("IN func 2");
  printf("Value of b is :%d",b);
}
