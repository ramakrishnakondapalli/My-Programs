#include<stdio.h>
#include<stdlib.h>
main()
{
int arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
 int (*ptr)[4],i,j;
  ptr=arr;
  for(i=0;i<3;i++)
   {
     for(j=0;j<4;j++)
       {
          printf("%d",ptr[i][j]);
       }
      printf("\n");
   }

}
