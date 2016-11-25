#include<stdio.h>
main()
{
  int data,bitposition,ch,l;
  printf("Enter data and bitposition:");
 scanf("%d %d",&data,&bitposition);
 printf("Enter Choice:1.Test bit 2.Setbit 3.Clear bit 4.Compliment bit");
 scanf("%d",&ch);
//l=(data<<bitposition)&1;
 switch(ch)
{
   case 1: printf("%d\n",((1<<bitposition)&data));
	   break; 
  case 2:  data = data | (1<<bitposition);
           printf("%d\n",data);
           break;
  case 3: data= data&~(1<<bitposition);
           printf("%d\n",data);
           break;
  case 4 :  data= data^(1<<bitposition);
           printf("%d\n",data);
           break;
}

 }
