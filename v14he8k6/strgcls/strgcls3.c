#include<stdio.h>
extern int g;
int a=1;
//g=a;
main()
{
  extern int a;
  a=1;
 // printf("Enter a:");
 // scanf("%d",&a);
   int b=a++;
    g=a++;
   printf("%d\n",a);
   printf("%d",g);


}
   //g=a;
~
~
~
~
~
~

