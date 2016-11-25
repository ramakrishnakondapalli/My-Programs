#include<stdio.h>
#include<math.h>
main()
{
  int a,b,min,i,j,max,data,n;
  printf("Enter min:");
  scanf("%d",&min);
  printf("Enter max:");
  scanf("%d",&max);
  data=min;
  if((min%2)==0)
    data++;
   for(data=min;data<=max;data=+2)
  {
     for(i=3;i<=sqrt(data);i++)
    {
    
      if((data%i)==0)
       break;
      if(i==(n+1))
      printf("%d",data);
     //exit(0);
   }
  }
    }
  

