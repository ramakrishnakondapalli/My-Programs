#include<stdio.h>
#include<stdlib.h>
double d;int n;
double pow_float(double,int);
main()
{
 printf("Enter float value\n");
 scanf("%lf",&d);
 printf("Enter pow to raise the float");
 scanf("%d",&n);
 printf("Float:%lf value raised to pow:%d is :%ld",d,n,pow_float(d,n));

}
double pow_float(double d,int n)
{
  int i;
  double p=1;
  if(n==0)
    return 1;
  else
   {
      for(i=1;i<=abs(n);i++)
           p=p*d;
        if(n>0)
             return p;
        else
             return 1/p;


   }


}
