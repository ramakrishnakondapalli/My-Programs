#include<stdio.h>
#include<stdlib.h>
main()
{
int i,j,n,k;
printf("Enter n");
scanf("%d",&n);
for(i=1,k=1;k<=n;i++,k++)
{
   
 for(j=i;j<(2*k-1);j++)
  {
    printf("%d",j);
    printf(" ");
    
  }
 // k=j+1;    
  printf("\n");
}




}
