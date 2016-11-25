//Program to copy content of one file into other file with copy command in cli
#include<stdio.h>
main(int argc,char **argv)
{
   FILE *fp1,*fp2;
   char ch;
   if(argc!=3)
  {
    if(argv[1]==NULL)
   {
    printf("Source file not given");
     return;
   }
    if(argv[2]==NULL)
   {   
    printf("Destination file not given");
     return;
   }
  }
   fp1=fopen(argv[1],"r");
   if(fp1==NULL)
    printf("Source File not Exists");
   fp2=fopen(argv[2],"r");
   if(fp2==NULL)
    printf("Destination File not Exists\n");
   else
   {
    printf("ALL previous contents of file will be lost"); 
    fp2=fopen(argv[2],"w");
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
       // printf("%c",ch);
    }
  fclose(fp2);
  fclose(fp1);
 }
}
