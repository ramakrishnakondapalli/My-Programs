#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>
struct termios attrval;
int i,j;char str[10];
main()
{
 tcgetattr(0,&attrval);
 attrval.c_lflag&=~ICANON;
 tcsetattr(0,TCSANOW,&attrval);
while(1)
{
  printf("Enter string \n");
  str[i++]=getchar();
 // printf("you have entered %c\n",str[i]);
 /* if(str[i]=='q'){printf("You have entered %s\n",str);
   return;}*/
  if(strstr(str,"q"))
  {
   printf("you have entered %s",str);
   return;
  } 
 else 
   continue;

}

  attrval.c_lflag|=ICANON;
  tcsetattr(0,TCSANOW,&attrval);
}
