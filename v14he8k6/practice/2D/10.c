#include<stdio.h>
#include<stdlib.h>
main()
{
int x=137,i,j;
char *p;
p=&x;
for(i=0;i<32;i++)
{
  j=(x>>i)&1;
   printf("%d",j);
}
for(i=0;i<8;i++)
{
 j=(*p>>i)&1;
  printf("\n%d",j);
   
}


}
