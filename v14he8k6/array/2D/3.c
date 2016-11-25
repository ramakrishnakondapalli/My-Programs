#include<stdio.h>
#include<stdlib.h>
main()
{
  int **p;
int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
  p=a;
  printf("%d\n",*(*(p+2)+0));
// printf("%d",*p[0][0]);


}
