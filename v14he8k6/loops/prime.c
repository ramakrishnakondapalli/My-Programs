#include<stdio.h>

main()
{
  int a,b,c;
  printf("Enter a  number :");
  scanf("%d",&a);
 if((a%2==0)||(a%3==0))
  {
     printf("Given number is not a prime number");
  }
 else if ((a%5==0)||(a%7==0))
  {
     printf("Giiven number is NOT A PRIME NUMBER");
  }
else 
  {
    printf("Given number is a prime number");
  }
}
