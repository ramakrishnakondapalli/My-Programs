#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
  FILE *fp1,*fp2,*fp3;
  int i=0,cnt=0;
  char ch,*buf;
  fp1=fopen("argv[1]","w");
  fp2=fopen("argv[2]","r");
  fp3=fopen("argv[3]","r");
  while((ch=fgetc(fp2))!=EOF)
   {
      fputc(ch,fp1);
       cnt++;
   }
   fclose(fp2);
   fputc('\n',fp1);
  while((ch=fgetc(fp3))!=EOF)
   {
      fputc(ch,fp1);
        cnt++;
   }
   fputc('\n',fp1);
   fclose(fp3);
   buf=malloc(cnt*sizeof(char));
   while((ch=fgetc(fp1))!=EOF)
   {
      buf[i]=ch;
      i++;
   }
   for(i=0;i<cnt+2;cnt++)
   {
     printf("%s",buf[i]);
   }
fclose(fp1);

}
