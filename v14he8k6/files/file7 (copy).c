//Program to search a string in a file if found replace it with another string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc, char **argv)
{
  FILE *fp;
  char name[20],ch,*buf,*ptr;
  int size=0,cnt=0,i,l,m,k;
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
             l=strlen(argv[2]);
             m=strlen(argv[3]); 
           if(m-l>=0)
            size=size+(m-l);
           else
            size=size+(l-m);
           buf=calloc(1,size);
//************************************//
//************************************//
       fp=fopen(argv[1],"r");
       for(i=0;i<size-(m-l+1);i++)
       {
          buf[i]=fgetc(fp);
        }
     fclose(fp);
//************************************//
	ptr=buf;
    while(ptr=strstr(ptr,argv[2]))
	{
             k=ptr-buf;
               memmove(ptr+m,ptr+l,(size-k-l)*sizeof(FILE));
              for(i=0;i<strlen(argv[3]);i++)
                  buf[k+i]=*(argv[3]+i);
	      	ptr++;
   	}
//    printf("%s",buf);
         fp=fopen(argv[1],"w");
           for(i=0;i<size;i++)
           {
               fputc(buf[i],fp);
           }
        fclose(fp);
}
