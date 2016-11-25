#include<stdio.h>
#include<string.h>
char *strstr1(const char*p,const char*q);
main()
{
   char *p=NULL,*q;
   char s1[20],s2[20];
    printf("Enter string 1:");
    gets(s1);
    printf("Enter string 2:");
    gets(s2);
	//printf("%s\n",s1);
	//printf("%s\n",s2);
   p=strstr1(s1,s2);
 	if(p)
   printf("s2 occured at  position %d in s1\n",p-s1+1);
	else
	printf("Not found\n");
}
char *strstr1(const char*p,const char*q)
{
   int i,n,j,flag=1;  
   for(i=0;p[i];i++)
    {
       
       if(p[i]==q[0])
        {   flag=1;
           for(j=1;q[j];j++)
            {
                if(p[i+j]==q[j])
                 {
                      continue;
                 }
                else
                 {flag=0;
                    break;
                 }
                  // printf("sub string not found in Main string");
            }
               return p+i;
        }
	//if(flag==1)
        //return p+i;
    }
     //printf("String not found");
       //if(flag==1)
       // return p+i;
    
     return;
}
