#include<stdio.h>
#include<string.h>
main()
{
  FILE *fp;
  char line[81];int i,wc=0,c=0,sc=0,len;
  fp=fopen("sample.txt","r");
  if(fp==NULL)
  {
    printf("Invalid file");return;
  }
 while(fgets(line,81,fp)!=NULL)
  {     len=strlen(line);
       for(i=0;i<len+1;i++)
       {
           
         if((line[i]!=' '||'.'||'\n'||'\t'||':'||','))
          {
           
             sc++; printf("%d %d\n",sc,i);}
       }
        c+=i;

   }
  fclose(fp);
   printf("Word countis:%d %d wc:%d",c,sc,c-sc);


}
