#include<stdio.h>
main()
{ 
  int a,b,c;
  printf("Enter a and b and c:");
scanf("%d%d%d",&a,&b,&c);
 if((a==b) && (a==c) && (b==c))
{
   printf("All are Equal:");
          
}
else if(a>b)
{
   if(a>c)
  {
  printf("A is greater");
  }
else
  {
   printf("C is greater");
  }
}
else if (a<b)
{
   if(b>c)
 {
   printf("B is Greater");
 }
 else 
{
   printf("C is Greater");
}
}

}
