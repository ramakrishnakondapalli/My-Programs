#include<stdio.h>
main()
{
 int a,b,j,i,n;
 printf("Enter n :");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
  for(j=n;j>=i;j--)
  {
     printf("*");
     printf(" ");
  }
    printf("\n");
  for(j=1;j<=i;j++)
  {
   printf(" ");
  }
 // printf("\n");
} 




}
