#include<stdio.h>
#include<string.h>
int mystrlen(char *str);
main()
{
 char str[10];int count; 
 printf("Enter string:");
  scanf("%s",str);
  count=mystrlen(str);
  printf("string length is :%d",count);
}
 int mystrlen(char *str)
  { int i;
   for(i=0;str[i]!='\0';i++);
   return i;
  }
