#include<stdio.h>
main()
{
   FILE *fp;
   char name[20],ch;
   printf("Enter file naame");
   gets(name);
   fp=fopen(name,"r");
   if(fp==NULL)
    {
      printf("File does not exist");
    }
    while((ch=fgetc(fp))!=EOF)
   {
    
     printf("%c",ch);
     
   }
     fclose(fp);

}
