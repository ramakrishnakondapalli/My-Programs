#include<stdio.h>
#include<stdlib.h>
main()
{
  int (*p)[5],i,j;
  
  p=calloc(1,10*sizeof(int));

  for(i=0;i<5;i++)
  {
    printf("Enter name:");
    scanf("%s",p[i]);
  }
for(i=0;i<5;i++)
   printf("%s",p[i]);


}

