#include<stdio.h>
#include<stdlib.h>
main()
{
 char *p[5],i;
  for(i=0;i<5;i++)
  {
   p[i]=calloc(1,sizeof(char)*10);
   printf(" %u:Enter name",p[i]);
   scanf(" %s",p+i);
  }
  for(i=0;i<5;i++)
  {
    printf(" %u %s\n",p[i],p[i]);
  }


}
