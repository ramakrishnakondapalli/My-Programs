#include<string.h>
#include<stdio.h>
main()
{
  char str1[20],str2[20];
   int l,n,k=0,i,j,*ptr,rem,sum=0,base=1;
   printf("Enter string1:");
   gets(str1);
   l=strlen(str1);
//   n=strlen(str2);
   printf("%d %d\n",l);
   for(i=l;i>=0;i--)
    {
       sum=sum+base*('string[i]'-48);
        base=base*10;
      } 
        //ptr=&(str1[i]-k-1);
       
 
       
       //if(k==n)
      printf("INTEGER VALUE IS %d",sum);
   
}
