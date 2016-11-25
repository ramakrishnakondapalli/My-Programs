#include<stdio.h>
#include<math.h>

{
  int a,b,i,j,n,min,max,data;
  printf("Enter max :");
  scanf("%d",&max);
   printf("Enter min");
   scanf("%d",min);
   if(min%2==0)
     data++;
  n=sqrt(data);
   for(;data<=max;data=+2)
  {
   for(j=3;j<=n;j=+2)
   {
    if(data%i==0)
     break;
   }
    }
   if(i==(n+1))
    printf("%d",data);
}
