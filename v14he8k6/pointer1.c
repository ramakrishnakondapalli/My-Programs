
 
#include<stdio.h>
int g=1;
void func(int x)
{
   printf("x=%d at %p \n",x,&x);
}
main()
{

  int l=2;
  static int s=3;
  printf("g=%d at %p  %d \n",g,&g,&g);
  printf("s=%d at %p  %d \n",s,&s,&g);
  printf("l=%d at  %p  %p %d\n",l,&g,&func,func);
  func(l+s);


}

