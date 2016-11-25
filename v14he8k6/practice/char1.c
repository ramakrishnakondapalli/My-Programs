#include<stdio.h>
#include<string.h>
main()
{
    char ch=-255;
int i;
   printf("%d  %x\n",ch,ch);
  for(i=7;i>=0;i--)
printf("%d",(ch>>i)&1);



}
