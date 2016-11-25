#include<stdio.h>
main()
{
  int a=1,b=1,c=1,d;
 // printf("Enter a and b");
 // scanf("%d %d",&a,&b);
  c=(a++)+(b++)+(c++);
 printf("%d %d %d  \n",a,b,c);
a=(++b)+(++c)+(++a);
  printf("%d %d %d  \n",a,b,c);
b=(++b)+(c++)+(++a);
printf("%d %d %d \n",a,b,c);
}



