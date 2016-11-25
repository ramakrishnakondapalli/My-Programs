#include<stdio.h>
main()
{
  int a,b,c,i,j,n;
  for(i=1;i<=n;i++)
   {
    if(i<n/2)
    {
     for(j=1;j<=i;j++)
     {
       printf("*");
       for(j=1;j<=(n-(2*i));j++)
       {
         printf(" ");
       }
       for(j=1;j<=i;j++)
       {
         printf("*");
       }
     }
    }
    else if(i=n/2)
     {
       for(j=1;j<=n;j++)
       {
            printf("*");
            printf(" ");
       }
     }
   else
   {
     for(j=i;j<=n;j++)
     {
        printf("*");
        printf(" ");
     }
     for(j=1;i+1>=n;i--)
       {
          printf(" ");
       }
     for(j=i;j<=n;j++)
      {
        printf("*");
      }
   }

   }
}
