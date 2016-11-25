#include<stdio.h>
main()
{
  int marks[10],b[10],n,i,k=0,l,t=0;
  printf("Enter marks : ");
  for(i=0;i<10;i++)
  {
   //printf("Enter marks:");
   scanf("%d",&marks[i]);
  }  
    k=marks[i];
  for(i=0;i<10;i++)
  {   
      
    if(marks[i]>k)
    {
       
        k=marks[i];
       // printf("%d\n",k);
    }
     else
     {
       k=marks[i];
       //printf("%d\n",k);
     }
    //if(k>t)



  }
  printf("%d",k);

}

