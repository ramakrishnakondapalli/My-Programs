#include<stdio.h>
main()
{
//int a=20,b=30,c=40;
int bit=512,mbit;
mbit=~bit;
bit=bit&mbit;
printf("%d %d",bit,mbit);
//printf("%d %d %d %d ");
//printf("%u ",-1);


}
