#include<stdio.h>
main()
{
  int i,n;
  char s1[10]={'a','b','c','d'};
   char s2[10]="ABCDE";

  n=sizeof(s1)/sizeof(s1[0]);
  
  for(i=0;i<n;i++)
   printf("%c",s1[i]);
  

}
