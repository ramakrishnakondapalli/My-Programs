#include<stdio.h>
int partition(int [],int ,int);
void quicksort(int [],int,int);
void swap(int [],int,int);

main()
{
	int a[10],i;
	printf(" enter the ele");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("ele before sort\n");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	quicksort(a,0,9);
	printf("\nele after sort\n");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	printf("\n");	 
}

void quicksort(int a[],int l,int h)
{	int pivot;
	if(h>l)
	{
		pivot=partition(a,l,h);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,h);
	}
}

int partition(int a[],int l,int h)
{
	int pivot_ele,left,right;
	pivot_ele=a[l];
	left=l;
	right=h;
	while(left<right)
	{
		while(a[left]<=pivot_ele)
			left++;
		while(a[right]>pivot_ele)
			right--;
		if(left<right)
		swap(a,left,right);
	}	
	a[l]=a[right];
	a[right]=pivot_ele;
	return right;
}

void swap(int a[],int left,int right)
{
	int temp;
	temp=a[left];
	a[left]=a[right];
	a[right]=temp;
}
