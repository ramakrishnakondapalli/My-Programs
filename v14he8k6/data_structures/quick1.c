#include<stdio.h>
void quicksort(int [],int,int);
void swap(int [],int,int);
int partition(int [],int,int);
main()
{
int a[10];i,j,l,h;

  printf("Enter elements into array\n");
  for(i=0;i<10;i++)
   scanf("%d",&a[i]);
  printf("Elemens in unsorted array\n");
   for(i=0;i<10;i++)
     printf("%d",a[i]);
   quicksort(a,0,9);
  printf("After sorting\n");
  for(i=0;i<10;i++)
   printf("%d",a[i]);

}
void quicksort(int a[],int l,int h)
{





}
int partition(int a[],int l,int h)
{




}
void swap(int a[],int l,int h)
{




}
