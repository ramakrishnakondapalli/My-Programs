#include<stdio.h>
#include<stdlib.h>
main()
{
  int (*p)[5],**s,i,j,r,c;
  printf("Enter rows and columns");
  scanf("%d %d",&r,&c);
   
   p=calloc(1,r*c*sizeof(int));
   printf("Enter elements into array ");
   for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
       {
          scanf("%d",&p[i][j]);
       }
     }
  s=p; 
   for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
       {
          printf("%d",s[i][j]);
       }
     }
   


}
