#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char line[81];
main(int argc,char *argv[])
{
  FILE *fp;
  int i,n=0,tl=0,sp=0,sl=0;
  fp=fopen(argv[1],"r");
  if(fp==NULL)
   {
     printf("No file Exists!");return;
   }
  while(fgets(line,81,fp)!=NULL)
   {
        n=strlen(line);
         if(line[n]==';')
          {
            sl++;break;
          }
         for(i=0;i<81;i++)
         {
             if(line[i]!=' ')
              {
                tl++;break;}
          }
        if(i==n)
         {
              sp++;

         }
        
   }
    tl+=sp+sl;
    printf("total lines are:%d\n",tl);
   fclose(fp);

}
