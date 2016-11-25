#include<stdio.h>
main()
{
  int a[10]={1,2,3,4,5,6},i,n,k;
  char b[10]="abcde",ch;
  //{'A','B','C','D','E',' ','\0'};
  //printf("Enter array:");
  //scanf("%d",a[]);
  for(i=0;i<5;i++)
  {
   
     k=(int)b[i]-32;
     //=ch-32;
     
   printf("%c\n",k);
  } 



}
