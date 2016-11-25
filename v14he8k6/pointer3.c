#include<stdio.h>
main()
{
   int a,i,b;
   char *p;
   char  c;  
   double d;
   printf("Enter data");
   scanf("%lf",&d);
   //printf("%d",c);
   p=&d;
   for(i=0;i<=7;i++)
   {
      b=*((char *)p+i);
      printf("%d\n",b);
     //printf("%d",(b>>i)&1);
 
  }

  
}
