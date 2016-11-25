#include<stdio.h>
main()
{
int n,i,count=0;
char str[20];
printf("Enter string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
   
  count++;
}
 printf("String length is:%d",count);

}
