#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
int i,j,number,cnt=0,digit[5],len,num[5],n=10;
char *ones[]={"","one","two","three","four","five","six","seven","eight","nine"},num1[10];
char *elev[]={"eleven","tweleve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char *tens[]={"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty","hundred"};
printf("Enter number:");
scanf("%s",num1);

for(i=0;num1[i];i++)
if(!((num1[i]>='0')&&(num1[i]<='9')))
  {
  if(num1[i]=='-')
  {
    continue;
  }
  printf("please enter correct number");return;
  }

if(num1[0]=='-')
{
printf("minus ");
number=atoi(num1+1);
}
else
{
number=atoi(num1);
}
//printf("%d",number);
while(number)
{
	digit[cnt++]=number%10;
	number=number/10;
	
}

//for(i=0,j=4;(i<cnt)|(j==0);i++,j--)
//num[i]=digit[j];
//printf("%d",number);

/*for(i=0;(i<cnt);i++)
if(!((digit[i]>=0)&&(digit[i]<=9)))
  {
  printf("%d",digit[i]);
  printf("please enter correct number");return;
  }*/


//for(i=0;(i<cnt);i++)
//printf("%d",num[i]);

//printf("cnt=%d\n",cnt);
	if(cnt==5)
	{
		if(digit[3]==0){
			printf("%s thousend ",tens[digit[4]]);	
			if(digit[2]!=0)
                    {
			printf("%s hundred ",ones[digit[2]]);
                    }
                    
			if(digit[1]==1)
                    {
				printf("%s\n",elev[digit[0]]);
			
                    }
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
		else if(digit[4]!=0)
		{      
                        if(digit[4]==1)
                        printf("%s thousend ",elev[digit[3]-1]);
                        else
			printf("%s %s thousend ",tens[digit[4]],ones[digit[3]]);
			if(digit[2]!=0){
			printf("%s hundred ",ones[digit[2]]);}	
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{       
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
	}
	else if(cnt==4)
	{
		if(digit[3]==0)
		{	
			printf("%s thousend ",ones[digit[3]]);	
			if(digit[2]!=0){
			printf("%s hundred ",ones[digit[2]]);}
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
		else if(digit[3]!=0)
		{
			printf("%s thousend ",ones[digit[3]]);	
			if(digit[2]!=0){
			printf("%s hundred ",ones[digit[2]]);}	
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
	
	}
	else if(cnt==3)
	{
		if(digit[2]==0)
		{	
			if(digit[2]!=0){
			printf("%s hundred ",ones[digit[2]]);}
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
		else if(digit[2]!=0)
		{
			if(digit[2]!=0){
			printf("%s hundred ",ones[digit[2]]);}	
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
	}
	else if(cnt==2)
	{
		if(digit[1]==0)
		{	
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
		else if(digit[1]!=0)
		{
			if(digit[1]==1)
			{
				printf("%s\n",elev[digit[0]]);
			}
			else
			{
				printf("%s %s\n",tens[digit[1]],ones[digit[0]]);
			}
		}
	}
	else if(cnt==0)
	{printf("Zero\n");}
	else
	{
		printf(" %s\n",ones[digit[0]]);
	}
}
