#include<stdio.h>
main()
{
  int i,j,n,l;
  printf("Enter n :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(j/2!=0)
      {
         printf("0");
         printf(" ");
    
      }
      else
      {
           printf("1");
           printf(" ");
          
      } 
         // printf("\n"); 
    }
    printf("\n");
  }

}

