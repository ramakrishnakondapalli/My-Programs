#include<stdio.h>
#include<string.h>
main()
{
  char str1,str2;
  int i,n;
  printf("Enter string1:");
  scanf(" %s",str1);
  printf("Enter string 2:");
  scanf(" %s",str2);
  for(i=0;str1[i];i++)
   {
                if(str1[i]==str2[i])
                     {
             
                         continue;
                      }
                    else
                       {
                           return(str1[i]-str2[i]);
                        }

                       if(str1[i]=='\0')
                         printf("%d",0);                  

}
