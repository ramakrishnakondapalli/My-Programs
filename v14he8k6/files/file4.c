//File to print no of words and character in a file
#include<stdio.h>
main(int argc,char **argv)
{
  FILE *fp;
  int ln=0,wc=0,c=0;
  char ch;
  fp=fopen(argv[1],"r");
  if(fp==NULL)
   printf("File doesnot exist");
if(argv[2]==NULL)
{
 printf("Invalid command");
  return;
}
if(argv[2]=="-w")
{ 
  while((ch=fgetc(fp))!=EOF)
   {
     if(ch==' '||ch=='\n'||ch=='.')
        wc++;
      //sp++;
    
   }
     printf("Word count is :%d",wc);
}
if (argv[2]=="-c")
{
  while((ch=fgetc(fp))!=EOF)
  {
        c++;

   }
  printf("No of characters are %d",c);
}
}
