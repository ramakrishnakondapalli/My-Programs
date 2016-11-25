#include<stdio.h>
main()
{
   int i,j,n;
   printf("Enter n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
      {
        printf(" ");
 
      }
     for(j=1;j<=i;j++)
      {
        printf("%c",65+j-1);
        printf(" ");
      }
     printf("\n");
   }
}
