#include<stdio.h>
main()
{
 int a=0,b=1,c,n,i,t;
 printf("Enter Count :");
 scanf("%d",&n);
 printf(" %d  %d",a,b);
 for(i=2;i<n;i++)
  {
     
    c=a+b;
    printf(" %d ",c);
    //t=a;
    a=b;
    b=c;
   
  }
}
