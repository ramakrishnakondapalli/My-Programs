//WAP TO  INPUT A STRING AND CONVERT ALL LOWERCASE ALPHABETS INTO UPPERCASE
#include<stdio.h>
main()
{   
    
   char s1[20],s2[20],*p;
   int  j,i,k,n=0;
   printf("Enter string1:");
   scanf("%s",s1);
   p=s1;
   for(i=0;s1[i]!='\0';i++)
    n++;
    for(i=0;i<n;i++)
    {
        //scanf("%c",&s1[i]);
       k=(int)s1[i]-32;
       s2[i]=(char)k;
        //s2[i]=s1[j];
    }
  printf("%s\n",s2);
   
}
