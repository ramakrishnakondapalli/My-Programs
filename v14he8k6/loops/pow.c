#include<stdio.h>
main()
{
  int a,b,r=1;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  l: if(b>0)
     {  r=r*a;
  //   printf("%d\n",r);
      b=b-1;
     goto l; }
 printf("%d",r);
}
