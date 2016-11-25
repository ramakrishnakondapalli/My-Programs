#include<stdio.h>
#include<stdlib.h>
main()
{
char **p;int i,j;
   p=calloc(5,sizeof(char *));
   for(i=0;i<5;i++)
      {
        p[i]=(char *)calloc(10,sizeof(char));
        printf(" p:%u *p:%u **p:%u  %u\n",p,*p,**p,p[i]);
      }
    
      {
    for(j=0;j<5;j++)
        {
          printf("Enter name");
          scanf("%s",p[j]);
        }
      }
    for(i=0;i<5;i++)
      {
       printf(" %u:%s\n",p[i]);
      }
}
