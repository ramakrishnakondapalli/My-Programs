#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
  FILE *fp,i,n;
 char *buf,*ptr,line[100];
 fp=fopen(argv[1],"r");
  if(fp==NULL)
    {
      printf("Filedoesn't exists");return;
    }
 while(fgets(line,100,fp)!=NULL)
   {
      if(ptr=strstr(line,argv[2]))
         {
            n=line-ptr;
           for(i=0;i<strlen(argv[2]);i++)
            {  
              line[i]='*';
            }
         }

   }
fclose(fp);





}
