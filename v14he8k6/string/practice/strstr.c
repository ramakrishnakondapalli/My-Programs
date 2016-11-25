#include<stdio.h>
#include<string.h>
main()
{
  char str[15],str1[10];
  int i,j,n,m;
  printf("Enter string");
  gets(str);
  n=strlen(str);
  printf("Enter sub string");
  gets(str1);
  m=strlen(str1);
  for(i=0;str[i];i++)
   {  j=0;
      if(str1[j]==str[i])
       {   i++;
          for(j=1;str1[j];j++)
               if(str1[j]=str[j])
       }

      
   }
   if(j==m)
     printf("string found ");
   else
     printf("string no found");



}
