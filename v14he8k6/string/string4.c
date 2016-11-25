//Reverse of a string
#include<stdio.h>
#include<string.h>
main()
{
  int i,n=0;
  char  a[100];
   printf("Enter string:");  
    gets(a); 
  //for(i=0;i<100;i++)
   {
    //scanf("%c",&a[i]);
   } 
   for(i=0;a[i]!='\0';i++)
    {
     printf("%c",a[i]);
      n++;
    } 
 // printf("%d",n);
  //puts(a); 
   printf("\n");
  for(i=n;i>=0;i--)
   {
    printf("%c",a[i]);

   }



}
