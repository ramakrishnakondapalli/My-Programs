#include<stdio.h>
main ( )
{
 int i;
 static char *s[ ]  = {"black", "white", "yellow", "violet"};
 char **ptr[ ] = {s+3, s+2, s+1, s}, ***p;
 p = ptr;
 **++p;
// printf("%s",*--*++p + 3);
  for(i=0;i<4;i++)
     {
        printf("%s\n",s+i);

     }
  for(i=0;i<4;i++)
   {
     printf("%s",(s[i]));
   }
}
