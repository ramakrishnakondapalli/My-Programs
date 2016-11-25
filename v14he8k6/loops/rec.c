#include<stdio.h>
main()
{
  int v,i;
  printf("Enter dta");
  scanf("%d",&v);
  printf("In main:");
  printf("v=%d at %u",v,&v);
  func1(v);
  printf("After Returning v=%d at %u",v,&v);
  
}
 int func1(int v)
{
  int x;
   x=v/2;
  printf("x=%d at %u",x,&x);
  printf("\nIN func v=%d at %u",v,&v);
  return v;

}
