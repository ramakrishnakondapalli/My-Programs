#include<stdio.h>
main()
{
  int marks,sum,avg;
  printf("Enter marks:");
  scanf("%d",&marks);
  if((marks>0)&&(marks<=39))
   {
     printf("Fail");
   }
  
  else if((marks>=40)&&(marks<=49))
   {
     printf("Third class");
   }
 else if((marks>=50)&&(marks<=59))
   {
     printf("Second class");
   }
 else if((marks>=60)&&(marks<=74))
   {
     printf("First class");
   }
  else
   {
     printf("Distinction");
   }
}
