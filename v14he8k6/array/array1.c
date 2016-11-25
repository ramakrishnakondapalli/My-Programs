#include<stdio.h>
main()
{
 int a[]={22,77,44,55,88,99,33,66,11,100};
 int b[10],i,n,j=0;
 n=sizeof(a);
 printf("%d\n",n);
 for(i=10;i>0;i--)
 {
    b[10-j]=a[10-i-1];
      j++;
 }
 for(i=0;i<10;i++)
 {
  printf("%d\n",b[i]);
 }

}
