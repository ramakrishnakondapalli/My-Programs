#include<string.h>
#include<stdio.h>
main()
{
  char str1[20],str2[20];
   int l,n,k=0,i,j,*ptr;
   printf("Enter string1:");
   gets(str1);
   printf("Enter string2");
   gets(str2);
   l=strlen(str1);
   n=strlen(str2);
   printf("%d %d\n",l,n);
   for(i=0;i<l;i++)
    {
        j=0;
      if(str1[i]==str2[j])
       { 
            
           for(j=0;j<n;j++)
           {
             if( str1[i+j]=str2[j] )
              {
          
                 k++;
              }
            
           }
       
      } 
        ptr=&(str1[i]-k-1);
       
    }
       
       if(k==n)
      printf("Sub string found in main string");
      else
         printf("substring not found");
    



}
