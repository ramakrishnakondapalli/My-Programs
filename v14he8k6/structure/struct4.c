#include<stdio.h>
//Struct Bit Field
struct A{
          int a:3
          int c:3
          int b:2

        }v1;
main()
{
 struct A v1;
  v1.a=v1.c=v1.b=20;
  printf("%d %f %d",v1.a,v1.b,v1.c);

}
