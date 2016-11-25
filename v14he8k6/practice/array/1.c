#include<stdio.h>
#include<stdlib.h>
main()
{
int (*p)[5],i,j;
   
    p=calloc(1,50*sizeof(char));
  for(i=0;i<5;i++)
    {
     
       printf("Enter name\n");
       scanf("%s",p[i]);

    }
for(i=0;i<5;i++)
   printf("%s",p[i]);




}
