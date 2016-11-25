#include<stdio.h>
main()
{  char ch;
   int a,bit=8,c=2,i=1,decimal=0,bin;
   printf("Enter Character:");
   scanf("%c",&ch);
   l:  if(bit<=8)
 {
 
   bin=((ch>>bit)&1);
  // printf("%d",(ch>>bit));
    printf("%d",bin);
    bit=bit-1;
  if(bit>=0)
{
  goto l;
}
 // decimal=decimal+ch%10;
 /// printf("Decimal is %d",decimal+decimal*10);
 /// printf("%d\n",c);
  
 }
}
