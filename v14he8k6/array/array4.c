#include<stdio.h>
static int *q=15;
main()
{
 int *p;
 // int *q=15;
 printf("%d",q);
 p=f();
 f1();
 printf("main : p=%u *p=%d\n",p,*p);

}
void f1(void)
{
  int a[100]={0};
  printf("in f1\n");
  //printf("in f1 :%d",*q);
}
 f(void)
{
    int v;
  v=10;
  
  printf("v=%d at %u \n",v,&v);
  //printf("%d",*q);
  return &v;
}
