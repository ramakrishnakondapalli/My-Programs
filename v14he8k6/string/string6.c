#include<stdio.h>
#include<string.h>
main()
{
  int i,n,cnt=0;
  char str[25];
  printf("Enter string:");
  scanf("%s",str);
   printf("%d",n);
   for(i=0;i<n/2;i++)
    {
    
  if(str[i]==str[n-i])
       {
          cnt++;
       }
      // else
       {
        //  break;
       }
    }
    printf("%d",cnt);
   if(cnt==n/2)
    {
       printf("Given string is pallindrome");
    }
   else
   {
    printf("Given string is not pallindrome");
  }

}
