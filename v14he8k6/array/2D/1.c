#include<stdio.h>
#include<stdlib.h>
main()
{
 char **p;int i;
 p=calloc(1,5*sizeof(char));
  *p[5]={"rama","krishna","ravi","ramesh","vasu"};
  for(i=0;i<5;i++)
    {
       printf("%s",*p[i]);
    }



}
