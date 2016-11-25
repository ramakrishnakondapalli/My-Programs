#include<stdio.h>
int f(int );
int f2(int );
main()
{
  int a,b,i,j,n;
  printf("Enter number");
  scanf("%d",&n);
  printf("In main n at %u\n",&n);
  //printf("main stack at %d\n",main);
  f(a);

}
 int f(int i)
  {
    //printf("%d",i*i);
 //   printf("%d %u\n",f,&f);
    printf("IN f i at %u\n",&i);
    f2(i);
 
  }
 int f2(int i)
 {
   printf("i at %u\n",&i);
   //printf("%d %u\n",f2,&f2);

     main();

 }

