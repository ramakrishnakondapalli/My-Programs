#include<stdio.h>
#include<string.h>
main()
{
 char str[20];
   char * p =str;
  while(1)
{
  printf("Enter Message\n");
  gets(str);
 p[0]='x';
  printf("::::%s\n",str);
  
}

}
