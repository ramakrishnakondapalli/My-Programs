//FACTORIAL USING RECURSION
#include<stdio.h>
main()
{
  int i,n,f;
  printf("Enter n");
  scanf("%d",&n);
  
  f=fact(n);

  printf("Factorial of given number is %d",f);  
}
int fact(int n)
{
  int i,s;
  if(n==0)
  return 1;
  if(n==1)
  return 1;
  n=n*fact(n-1);
 return n;

}
