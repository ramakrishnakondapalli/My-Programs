#include<stdio.h>
main()
{
  int a=10,b=12,c=8;
  printf("%d %d %d ",(a=0,a,++a),(a=b,b++,b<7),(a=0,b++,a++));
//  printf("%d %d %d",a=0,a,a++);
 
 
 
 
}
