#include<stdio.h>
main()
{
int i,j,n;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{    
  for(j=1;j<=n-i;j++)
{  
    printf(" ");
}
  for(j=1;j<=n;j++)
 { 
    printf("*");  //printf("%d",j);
  
       printf(" ");
            
    }
  printf("\n");
}
   

}
