#include<stdio.h>
#include<stdlib.h>
main()
{
 char ***p;int i,j;
  p=calloc(3,sizeof(char*));
 
   for(j=0;j<3;j++)
    p[j]=calloc(3,sizeof(char*));
 
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
         p[i][j]=calloc(10,sizeof(char ));
      }
     }
 
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     printf("Enter elements\n");
     scanf("%d",&p[i][j]);
   }
 }

  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     
    printf("%d\n",p[i][j]);
   }
 }

}
