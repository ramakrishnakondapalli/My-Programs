#include<stdio.h>
int *add(int(*)[3][3],int(*)[3][3]);
main()
{
  int i,j,a[3][3],b[3][3],c[3][3],(*p)[3];
   printf("Enter elements into array A:");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
         {

           scanf("%d",&a[i][j]);
         }
     }
     printf("Array  A is:\n");
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
        {
          printf("%d",a[i][j]);
        }
        printf("\n");
     }
   printf("Enter elements into array B:");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
         {

           scanf("%d",&b[i][j]);
         }
     }
     printf("Array B is:\n");
     for(i=0;i<3;i++)
      {
         for(j=0;j<3;j++)
         {
           printf("%d",b[i][j]);
         }
      }
    p=add(a,b);
 printf("Addition of two matrices is:\n");
   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
         {
              printf(" %d ",p[i][j]);
         }
             printf("\n");
    }

}
 int *add(int (*p)[3][3] ,int (*q)[3][3])
{
  static int c[3][3];
int i,j;
     for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
        { 
            c[i][j]=(*(*(*p+i)+j))+(*(*(*q+i)+j));
            
         }

      }
    return c;}
