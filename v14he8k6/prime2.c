#include<stdio.h>
#include<math.h>
main()
{
  int data,i,n;
  printf("Enter number:");
  scanf("%d",&data);
  n=sqrt(data);
  printf("%d",n);
  for(i=3;i<=n;i+=2)
{
   if((data%i)==0)
    break;
} 
  if(i==(n+1))
   printf("%d is Prime\n",data);
  else
  printf("%d is non-prime",data);
  

}
