#include<stdio.h>
main()
{
  int n,i=3,count,c;
  printf("Enter the no.of prime numbers required\n");
  scanf("%d",&n);
  if(n>=1)
  {
    printf("First %d prime numbers are :\n");
    printf("\n");
  }
 for(count=2;count<=n;)
 {
   for(c=2;c<=i-1;c++)
   {
      if(i%c==0)
       break;
   
   if(c==i)
    printf("%d\n",i);
 count++;
   }i++;
 
 }


return 0;

}
