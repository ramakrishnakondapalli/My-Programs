#include<stdio.h>
main()
{
 int a,b,r=1;
 printf("Enter a and b:");
 scanf("%d %d",&a,&b);
    if(((a%b)==0))
 	{ 
	     r=a/b;  
		 while(r>=b)
    		{	
       			r=r/b;
  
                 }
                    printf("a is power of b\n");
          }
 	   
else if((b%a==0))
	{
 	   r= b/a;
   	  while(r>a)
    	  {
   	      r=r/a;
    	  }
     	 printf("b is power of a\n");
    	}
	
	
//if(r==b)
//{
  //printf("a is power of b");
//}
// else if(r==a) 
//{
 // printf(" bis power of a");
//}
 else 
{
  printf("a is not power of b and b is not power of a");
}
/*else
{
   printf("a is 	not power of b and b is not power of a");
}*/

 // goto l;


}
