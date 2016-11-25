#include<stdio.h>
#include<string.h>
static int cnt;
void func(int [] ,int,int);
main()
{
int i,j,a[10]={1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",sizeof(a));
 func(a,2,7);
  printf("%d",cnt);
}
void func(int a[],int i,int j)
{
  if(i>j)
    return;
  func(a,i+1,j);
   cnt++; 
 printf("%d %d ",a[i],cnt);
}
