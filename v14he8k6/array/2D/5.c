#include<stdio.h>
main()
{
char str[5][10],*p[5];int i; 
for(i=0;i<5;i++)
{
printf("Enter name\n");
scanf("%s",str[i]);
p[i]=str[i];   //we can initialise to array of pointers but not to pointer to 
}              //array
for(i=0;i<5;i++)
{
printf("%s %d %d\n",p[i],sizeof(p),sizeof(p[i]));
}
}
