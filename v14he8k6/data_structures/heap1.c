/******Heap sort****/

#include <stdio.h>
#define leftchild(i) (2*(i)+1)
void sift (int [], int, int);
void heapsort (int [], int);

int main ()
{

   int nums[9] = {22,5,67,45,32,101,99,73,10};
   int i;
   heapsort (nums, 9);
   printf("The sorted list, in ascending order, is :\n");
   for (i=0; i < 9; i++)
      printf("%d   ",nums[i]);

   return 0;
}

//This function is needed by heapsort to move elements down
void sift (int a[], int i, int n)
{
   int child;
   int temp;
   for (temp=a[i]; leftchild(i) < n; i = child)
   {
      child = leftchild(i);
      if (child != n-1 && a[child+1]>a[child])
	 child++;
      if (temp < a[child])
	 a[i] = a[child];
      else
	 break;
   }
   a[i] = temp;
  for(i=0;i<n;i++)
    printf("After sifting:%d"a[i]);
}

//this function executes heap sort.
void heapsort (int a[], int n)
{
   int i, temp;
   for (i=n/2-1; i>=0; i--)   //build heap
      sift (a, i, n);
   for (i=n-1; i>0; i--)
   {
      temp = a[0];
      a[0] = a[i];
      a[i] = temp;
      sift (a,0,i);
   }
}






