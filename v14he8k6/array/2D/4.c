#include<stdio.h>
#include<stdlib.h>
main()
{
int a[3][3],b[3][3],i,j,c[i][j],k;
(int*)a=input(a);
(int*)b=input(b);
printf("Matrix multiplication :");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
  {
   c[i][j]=0;
   c[i][j]+=a[i][k]*b[k][j];
    printf("%d",c[i][j]);
  }
 printf("\n");
}

}

int* input(int *a)
{
  int i,j;
  printf("Enter elements into array");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
     scanf("%d",&a[i][j]);
     }
   }
 return a;
}
