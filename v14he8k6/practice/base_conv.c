#include<stdio.h>
#include<stdlib.h>
void dec_bin(int);
void dec_hex(int);
void dec_oct(int);
main()
{
  char ch;
int i,j,num;
printf("Enter choice\n1.Decimal to binary\n2.Decimal to Hex\n3.Decimal to octal\n");
scanf("%c",&ch);
switch(ch)
{
  case '1': printf("Enter decimal number\n");
          scanf("%d",&num);
           dec_bin(num);
            break;
case '2': printf("Enter Decimal Number\n");
        scanf("%d",&num);
         dec_hex(num);
         break;
case '3':printf("Enter Decimal Number\n");
       scanf("%d",&num);
        dec_oct(num);
       break;
default:printf("Enter Correct choice\n");

}
}
void dec_bin(int num)
{
int i=1,rem=1,sum=0;
while(num>0)
{
   rem=num%2;
   sum=sum+rem*i;
   i=i*10;
    num=num/2;
}
printf("\n%d",sum);

}

void dec_hex(int num)
{
int i=1,rem=1,j=0;
static char sum[10];
while(num>0)
{
   rem=num%16;
    printf("%d",rem);
  if((rem>=0)&&(rem<=9))
   printf("%d",sum[j++]=sum[j]+rem*i);
 else if((rem>=10)&&(rem<=15))
     sum[j++]=sum[j]+rem*i+55;
   //printf("%d",sum[j]);
   i=i*10;
    num=num/16;
}
printf("\n%s",sum);

}


void dec_oct(int num)
{
int i=1,rem=1,sum=0;
while(num>0)
{
   rem=num%8;
   sum=sum+rem*i;
   i=i*10;
    num=num/8;
}
  printf("\n%d",sum);
}
