#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
char str[20],ch;
int i,j,cnt1=0,n,cnt2=0;
printf("Enter string\n");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{   
    for(j=i+1;j<n;j++)
     {
      if(str[i]==str[j])
     {      ch=str[j];
           if(ch==str[j])
               cnt1++;
          else
            cnt2++;}
     }

}
if(cnt1>=cnt2)
printf("%d",cnt1);
else
printf("%d",cnt2);

}
