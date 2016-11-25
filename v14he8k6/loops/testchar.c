#include<stdio.h>
#include<stdlib.h>
main()
{
  char a,b,c;
 l : printf("Enter a character :");
 scanf(" %c",&c);
 if((c>='A')&&(c<='Z'))
{ 
  printf("Given character is Capital alphabet");
}
else if((c>='a')&&(c<='z'))
{ 
  printf("Given character is small alphabet");
}

else if((c>='0')&&(c<='9'))
{ 
  printf("Given character is numeric");
}  
else 
{ 
  printf("Special character:");
}


printf("\nDO YOU WANT TO CONTINUE(Y/N):");
scanf(" %c",&a);
//a=getchar(); 
//gets(a);
if(a=='Y')
{
     goto l ; 
}
//else if(a=='N')
//{
 // exit(1);
//return;

//}
//else
//exit(1);
}
 
 

 

 
 


