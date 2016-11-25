#include<stdio.h>
char buf[10];
FILE *fp;
main()
{
 
  printf("myshell\n");
 while(1)
  {
  fp=fopen("shell.sh","w");
   gets(buf);
  fputs(buf,fp);
  fclose(fp);
  system("sh shell.sh");
  }
}
