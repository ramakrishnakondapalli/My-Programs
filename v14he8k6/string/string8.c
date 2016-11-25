//memmove
#include<stdio.h>
#include<string.h>
main()
{
   int i,n,s,d;
   void *dest,*source; 
   char str[20],*ptr1,*ptr2,*ptr;
   printf("Enter string:");
   scanf("%s",str);
   printf("Enter source position:");
   scanf("%d",&s);
   printf("Enter destination position:");
   scanf("%d",&d);
   printf("Enter how many bytes to move");
   scanf("%d",n);
   //n=atoi(str);
   //printf("%d",i);
   //source=s;
   //dest=&d;
   ptr=str;
   
   ptr1=(ptr+s);
   ptr2=ptr+d;
   for(i=0;i<n;i++)
   {
     *ptr2=*ptr1;
     ptr1++;
     ptr2++;
    
   }
   



}
