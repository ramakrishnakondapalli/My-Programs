#include<stdio.h>
#include<stdlib.h>
void insert(int*,int);
main()
{
int a[10],i;
printf("Enter elements into array\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
insert(a,10);
printf("Elements after sorting are\n");
for(i=0;i<10;i++)
  printf("%d ",a[i]);

}
void insert(int *p,int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
   temp=p[i];
  
    {
     // temp=p[i];
          for(j=i-1;j>=0;j--)
            {
              if(p[j]<=temp)
               {
            
                   break;
               }
              else
                p[j+1]=p[j];
             }    
            
     }
 //   else
 //      continue;
     p[j+1]=temp;
   
 }




}
