#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int num,i,n;
printf("Enter number:\n");
scanf("%d",&num);
n=sqrt(num);
for(i=1;i<=n;i++)
{
   if((num%i)==0)
       break;

}
if(i==(n+1))printf("Given number is prime");
else
  printf("Entered number is not prime\n");
}
