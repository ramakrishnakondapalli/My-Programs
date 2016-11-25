#include<stdio.h>
struct A{
         int a1;
         int a2;
       struct A *c;
        };
 main()
{
  struct A v1={5,10};
 //printf("%d %d",v1->a1,v1->a2);
  print(&v1);
}
void print(struct A *q)
{
   printf("%d %d",q->a1,q->a2);

}
//
