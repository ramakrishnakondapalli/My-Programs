#include<stdio.h>
int fact(int);
main()
{
  int a,b,i,j,n;
  printf("Enter n:");
scanf("%d",&n); 
 b=fact(n);
  printf("Factorial is: %d\n",b);

}
 int fact(int a)
 {
int k=1;
  while(a!=0)
  {
    k=k*a;
printf("a=%d ",k);
    a--;
  }

printf("\n");
return k;
 }
