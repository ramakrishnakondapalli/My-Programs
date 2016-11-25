#include<stdio.h>
#include<stdlib.h>
main()
{
char *p[5],str[10],*ptr;int i;
for(i=0;i<5;i++)
{
  printf("Enter name");
  gets(str);
  ptr[i]=(char *)calloc(1,strlen(str)*sizeof(char));
  ptr[i]=str;
   ptr++;
}
/*for(i=0;i<5;i++)
{
  printf("Enter name:");
  scanf("%s",p[i]);
}*/

for(i=0;i<5;i++)
{
  
  printf("%s\n",ptr[i]);
}



}
