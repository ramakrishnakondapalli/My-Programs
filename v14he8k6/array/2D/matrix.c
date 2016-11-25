#include<stdio.h>
#include<stdlib.h>
main()
{
  int **p,i,a[3][3],j;
  printf("Enter Elements into array:");
  for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)  
       {
        scanf(" %d",&a[i][j]);
       }
    }
  printf("Array is:");
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
         {
            printf(" %d ",p[i][j]);
          }
      }
}
