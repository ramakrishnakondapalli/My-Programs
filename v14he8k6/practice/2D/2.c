#include<stdio.h>
#include<stdlib.h>
main()
{
  char *p[5];int i;
   
  for(i=0;i<5;i++)
   {
      printf(" %u :",p+i);
      p[i]=calloc(1,10*sizeof(char));
      printf("Enter name:");
      scanf("%s \n",p[i]);  
   }
   for(i=0;i<5;i++)
    {
      printf("%s",p[i]);

    }



}
