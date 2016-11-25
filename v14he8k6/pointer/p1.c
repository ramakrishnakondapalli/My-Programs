#include<stdio.h>
main()
{
	 int c[ ]={2.8,3.4,4,6.7,5},x=2;
	 int j,*p=&x,*q=c;
	 for(j=0;j<5;j++)
            {
		printf(" %d ",*c);
	   	++q;	
             }
           printf("%d %d ",*p,c);
   for(j=0;j<5;j++)
     {
        printf("%d",*p);
       ++p;
     }
}
