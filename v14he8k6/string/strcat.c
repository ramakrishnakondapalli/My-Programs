#include<stdio.h>
#include<string.h>
char *str_cat(char *,char *);
main()
{
  char str1[10],str2[10];
  int i,j;
  printf("Enter string1");
  scanf("%s",str1);
  printf("Enter string2");
  scanf("%s",str2);
  
  printf("%s",str_cat(str1,str2));

}
char *str_cat(char *str1,char *str2)
{
   int n,i;
   n=strlen(str1);
   for(i=0;str2[i];i++)
      str1[n+i]=str2[i];
   return str1;

}
