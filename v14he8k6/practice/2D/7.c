#include<stdio.h>
#include<stdlib.h>
main()
{
  int *p[5],i,j;
  
  for(i=0;i<5;i++)
  {
   p[i]=calloc(1,10*sizeof(char *));
   printf("Enter name");
   scanf("%s",p[i]);

  }

  for(i=0;i<5;i++)
  {

     printf("%s ",p[i]);
  }


}
