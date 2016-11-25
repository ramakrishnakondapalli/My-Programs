#include<stdio.h>
#include<stdlib.h>
main()
{
  int  *p[5];
  int i,n;
  for(i=0;i<5;i++)
  {

  p[i]=calloc(1,10*sizeof(int));
   printf("Enter name:");
  scanf("%s",p[i]);
  }
 for(i=0;i<5;i++)
  {
   printf("%s\n",p[i]);

  }




}
