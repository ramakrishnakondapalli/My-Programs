#include<stdio.h>
main()
{
  int a,b=0,c,d,sum=0,rem=0,cnt=0,temp,data,l;
  char ch;
  printf("Enter a number:");
  scanf("%d",&temp);
  printf("Enter Choice:s.Sum of digits c.Count digits e.Even digits o.oddigits   h.Highest digits l.Lowest digits q.Quit");    
  scanf(" %c",&ch);
  switch(ch)
{
case 'c' : while(temp)
          {
             cnt++;
           temp=temp/10;
            printf("%d\n",temp);
          }
        printf("Count is %d ",cnt);
          break;
  case 's' : while(temp)
            {
            sum=sum+temp%10;;
            temp/=10;
            }
            printf("sum of digits in %d is %d",data,sum);
              break;
  case 'e' :  while(temp)
            {
                  temp=temp%10;
                if(temp%2==0)
                 {
                    printf("Even digit: %d",temp);
                 }
              
             }
               break;
  case 'o' :break;
  case 'h' :   while(temp)
               {
                 temp=temp%10;
                 if(temp>sum)
                  {

                    sum=temp;

                   }
               }    printf("HIGHEST DIGIT IS : %d",sum);
             break;
  case 'l' : 
              break;
  case 'q' : return;


}
  while(((ch=getchar())!='\n')&&(ch!=EOF));
}
