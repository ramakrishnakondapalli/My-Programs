#include<stdio.h>
main()
{
  int a=10,b=-3,c=0,d;
 d=(a=b)||(b=c);
 printf("C is : %d\n",d);
 d= (b=c)&&(c=a)&&(a=b);
 printf("C is %d\n",d);
d= (b=c)||(c=a)||(a=b);
printf("%d %d %d %d\n",a,b,c,d); 



}
