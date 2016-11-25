//strcmp returns 0 if strings are equal
//       returns 1 if strings are not equal
//       returns -1 if strings are equal but diff bw them is 32
#include<stdio.h>
#include<string.h>
main()
{
  int i,n,j,m;
  char s1[20],s2[20];
  printf("Enter string 1:");
  scanf("%s",s1);
  printf("Enter string2:");
  scanf("%s",s2);
  m=strlen(s1);
  n=strlen(s2);
  for(i=0,j==0;i<m;i++,j++)
   {
      
    if((s1+i)-(s2+j)==32||(s1+i)-(s2+j)==-32||(s1+i)-(s2+j)==0)
           {
               
           } 
            if((s2+j)=='\0')
               {
                   if((s1+i-n)-(s2+j-n)==32)
                      printf("%d",0);
                    else
                       printf("%d",-1);
                   return;
               }
           
          else 
           {
             printf("%d",1);
              return;
           }
       
   }


}
