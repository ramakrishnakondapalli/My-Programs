#include<stdio.h>
#include<stdlib.h>
main()
{
  int num,i;
   printf("Enter number\n");
   scanf("%d",&num);
   
    //int n=fib(num);
   for(i=0;i<num;i++)
    printf("%d ",fib(i));
}
int fib(int n)
{
  if(n==0||n==1)
  {  return 1;
  }
  return(fib(n-1)+fib(n-2));


}
