#include<stdio.h>
#include<stdlib.h>
main()
{
int (*p)[5];
int i,j,n;
	printf("enter rows \n");
	scanf("%d",&n);
     p=(int (*)[5])malloc(n*5*sizeof(int));
  for(i=0;i<n;i++)
  {
for(j=0;j<5;j++)
{	
     printf("Enter:");
     scanf("%d",&p[i][j]);
     
  }
}
  for(i=0;i<n;i++)
  {
	for(j=0;j<5;j++)
     printf("%d",p[i][j]);
  }


}
