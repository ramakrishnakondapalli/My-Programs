#include<stdio.h>
#include<string.h>
 char str[10],str1[5],str2[5];
main()
{
    float f;
    int i=0,sum1=0,sum2=0,num,rem=1,n,m,j;
      printf("Enter number:");
       scanf("%s",str);
     for(i=0;str[i];i++)
     {
        if(str[i]=='.')
         {
              i++;
            for(j=0;str[i+j];j++)
               {
                 str2[j]=str[i+j];
               }
      
         }
          str1[i]=str[i];    
     }
   printf("str1:%s\n",str1 );
    printf("str2:%s\n",str2);
  m=strlen(str1);
 n=strlen(str2);
  printf("m=%d n=%d",m,n);
     i=0;
  while(m)
  {
      sum1=sum1+rem*(str1[m-1]-48);
      rem=rem*10;
       m--;
   }
   printf("sum1:%d",sum1);
   rem=1;
  while(n)
  {
    sum2=sum2+rem*(str2[n-1]-48);
     rem=rem*10;
      n--;
   }

   sum1=sum1*rem;
   f=sum1+sum2;
    f/=rem;
   printf("Given number is %f\n",f);
   
}
