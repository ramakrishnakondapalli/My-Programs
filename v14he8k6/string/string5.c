#include<stdio.h>
#include<string.h>
main()
{
  int i,n,m,count=0,j,k;
  char s1[100],s2[25];
  printf("Enter string 1:");
  gets(s1);
  printf("Enter string 2:");
  gets(s2);
  m=strlen(s1);
  n=strlen(s2);
  printf("%d %d",m,n);
  for(i=0;i<m;i++)
  {
    j=0;
   //for(i=0;i<m;i++)
   {
    if(s1[i]==s2[j])
     { 
        //while(s2[j]!='\0')
       { 
        for(s1[i]=s2[j];j<7;i++,j++) 
        { 
          //if(s2[j]!='\0')
          {
            //i++;
           //j++;
           count++;
          }
        }
        // printf("%d\n",i);
        // printf("Count is :%d  %d\n",count,i);
       }
     }
  // else 
    // break;
   }
  }
  printf("final count :%d\n",count);
  count=count/n;
  printf("S2 occured in s1 %d times",count);
}
//When string occuring consecutively it doesn't work
