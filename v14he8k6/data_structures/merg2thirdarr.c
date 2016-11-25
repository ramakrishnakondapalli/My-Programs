#include<stdio.h>
void input(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
}

void output(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d ",a[i]);
	printf("\n");
}

void merge(int a[],int asize,int b[],int bsize)
{	int *c;
	int i,j=0,k=0,size;
	size=asize+bsize;
	c=malloc((size*sizeof(int)));
	for(i=0;i<size;i++)
	{	if((j<asize) && (k<bsize))
		{
			if(a[j]<b[k])
			{
			c[i]=a[j];
			j++;
			}
			else
			{
				c[i]=b[k];
				k++;
			}
		}
		else
		{
			if((j==asize) &&(k<bsize))
			{
				c[i]=b[k];
				k++;
			}
			if((k==bsize) && (j<asize))
			{
			c[i]=a[j];
			j++;
			}		
		}
	}
	printf("ele are:");
	output(c,size);
}
	
void sort(int a[],int size)
{
	int i,j,temp;
	for(i=size-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

main()
{
	int a[5],b[4];
	input(a,5);
	input(b,4);
	output(a,5);
	output(b,4);

	sort(a,5);
	output(a,5);
	printf("\n");
	sort(b,4);
	output(b,4);
	merge(a,5,b,4); 
	
}
