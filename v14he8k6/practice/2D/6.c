#include<stdio.h>
#include<stdlib.h>
main()
{
int **p,i,j,r,c;
printf("Enter row and columns");
scanf("%d ",&r);
scanf("%d ",&c);
int (*q)[c];
 p=(int *)calloc(1,r*c*sizeof(int *));
  printf("Enter elements into array\n");
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
       printf("%u",p[i][j]);
       scanf(" %d ",&p[i][j]);
     }
   }
   (*q)[c]=p;
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
       printf("%d",q[i][j]);
     }
   }

}
