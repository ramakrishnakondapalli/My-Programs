//Program to search a string in a file if found hide it
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc, char **argv)
{
  FILE *fp;
  char name[20],ch,*buf,*ptr;
  int size=0,cnt=0,i;
  //printf("Enter File name");
  //gets(argv[1]);
  fp=fopen(argv[1],"r");
  if(fp==NULL)
   {
     printf("File not exists");
	return;
   }
   while((ch=fgetc(fp))!=EOF)
   {
      //printf("%c",ch);
       size++;
   }
     //  size++;
  fclose(fp);
//***********************************//
                size++;       
            buf=calloc(1,size);
//************************************//
//************************************//
       fp=fopen(argv[1],"r");
       for(i=0;i<size-1;i++)
       {
           buf[i]=fgetc(fp);
       }
     fclose(fp);
//************************************//
	ptr=buf;
    while(ptr=strstr(ptr,argv[2]))
	{
          for(i=0;i<strlen(argv[2]);i++)
           {
               *ptr='*';
                ptr++;
	   }
        cnt++;
	ptr++;
   	}
  //if(strstr(ptr,argv[2]))
	if(cnt!=0)
    printf("String appeared for %dtimes\n",cnt);
else
    printf("String is not present in the maain string:\n");
    printf("%s",buf);

}
