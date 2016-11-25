#include<stdio.h>
#include<string.h>
int isend(int);
main()
{
  FILE *fp;
  char line[81];int i,wc=0,len;
  fp=fopen("sample.txt","r");
  if(fp==NULL)
  {
    printf("Invalid file");return;
  }
 while(fgets(line,81,fp)!=NULL)
  {   len=strlen(line);
      for(i=1;i<len+1;i++)
       {    
         if((isend(line[i]))&&!(isend(line[i-1])))
            wc++;
       }

   }
  fclose(fp);
   printf("Word countis:%d",wc);

}
  int isend(int ch)
   {
     switch(ch)
       {
      case ' ':

      case '.':

      case ';':

      case ':':

      case '\n':

      case '\t':

      case '-':       return 1;
     }
   return 0;
  }
