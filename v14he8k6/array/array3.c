#include<stdio.h>
main()
{
    static int a[10],n,i,*p,max;
    n=sizeof(a)/sizeof(a[0]);
    printf("%d",n);
    print(a,n);
    find_max(a,n);
    printf("Greatest element is :%d",max);
}
void print(int *p,int n)
{
  int i;
  printf("Enter array:");
  for(i=0;i<n;i++)
  {
   // a[i]=rand%100
    scanf("%d",&p[i]);
  }
   printf("Array is:");
 for(i=0;i<n-1;i++)
  {
    //printf("Array is:  ");
    printf(" %d ",p[i]);

  }
}
int find_max(int *p,int n)
{
  int i,temp;
  //printf("");
   //p=a;
   //printf("%d",a[0]);
   temp=a[0];
   for(i=1;i<n;i++)
   {
     if(temp<a[i])
       {
         temp=a[i];
         printf("%d\n",temp);

       }
   }
   return(temp);

}

