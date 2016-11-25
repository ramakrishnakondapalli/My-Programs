//#include<stdio.h>
//#include<stdlib.h>
/*main()
{
int a=10,b;
a>5?b=100:1;
printf("%d",b);
}*/
/*struct st{
   int a;
   char *p;
   int b;

};
main()
{
struct st v={10,"string",11};
struct st *l;
l->a=10;
l->b=12;
l->p="string";
printf("%s",v.p);
}*/
#define func1(a) #a
#define  fun2(a,b,c) a##b##c
main()
{
printf("%s",func1(func2(a,b,c)));
}
