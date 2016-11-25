#include<stdio.h>
/*int sum(int,int);
int mul(int,int);
 f1(int,int,int(*p)(int,int));*/
    int sum(int x,int y)
     {
          return x+y;

     }
   int mul(int x ,int y)
    {

        return x*y;
    }
    f1(int x,int y,int(*p)(int,int))
    {
        return ((*p)(x,y));

    }

main()
{
  int a,b,c,res;
  char ch;
   printf("Enter a and b");
   scanf("%d %d",&a,&b);
   printf("Enter choice 1.sum 2.mul");
   scanf(" %c",&ch);
   switch(ch)
    {
      case '1': res=f1(a,b,sum);
                 printf("sum is %d",res);
                break;
      case '2': res=f1(a,b,mul);
                 printf("mul is %d",res);
                break;
    }
/*    int sum(int x,int y)
     {
          return x+y;

     }
   int mul(int x ,int y)
    {

        return x*y;
    }
    f1(int x,int y,int(*p)(int,int))
    {
        return ((*p)(x,y));

    }*/
}
