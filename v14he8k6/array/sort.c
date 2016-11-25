#include<stdio.h>
main()
{
   int a[10],i,j,t;
   printf("Enter elements into array:");
   for(i=0;i<10;i++)
   {
    scanf(" %d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
     for(j=0;j<10;j++)
       {
          if(a[j]>a[j+1])
            {   
             printf("Sorting!");
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
            }
       }
   }
    for(i=0;i<10;i++)
     {

       printf("%d\n",a[i]);
     }

}
