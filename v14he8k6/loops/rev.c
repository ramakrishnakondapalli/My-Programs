#include<stdio.h>
main()
{
  int a,b,i,j,n,rem=0,cnt=0;
  printf("Enter number:");
  scanf("%d",&n);
 for(i=0;i<n;i++)
{

  mod=n%10;
  for(i=1;i<=cnt;i++)
  {
     res=mod*10;
  }
  rem=rem+mod;
  rem=rem*10;
  n=n/10;
  cnt++;

}
 printf("%d\n",rem);
 printf("%d",cnt);
 while(cnt)
  {
  rem=rem+n%10;
  rem=rem*10; 
   cnt--;
  }


}
