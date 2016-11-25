#include<stdio.h>
main()
{
   int i,j,n;
  printf("Enter n:");
  scanf("%d",&n);
  for(i=1;i<=(2*n-1);i++)
{
   if(i<=n)
   {
     for(j=1;j<=n-i+1;j++)
      {
      // if(i<(n+1))
       {
          printf("*");
          printf(" ");
       }
      }
   }
       else
       {
         for(j=1;j<=i-n+1;j++)
         {
            printf("*");
            printf(" ");
         }
       }
   printf("\n");
      }
    
   // for(j=2;j<=n;j++)
     //{
       //  printf(" ");
        //printf("*");
     //}
     //printf("\n");
 }
   //printf("\n");
  






