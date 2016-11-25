//deleting a student record by command ./deleterecord
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
                        char name[20];
                        int rollno;
                        float marks;
                      }student;
main()
{ 
  student v,*ptr,*buf;
  FILE *fp;
  int i=0,r,size=0,n=0;
  char ch;
  fp=fopen("STUDENT.DAT","r");
if(fp==NULL)
{ 
  printf("File not exists");
} 
  if(fread(&v,sizeof(v),1,fp)==0)
  {
    printf("No records present:\n");
     return;
  }
 printf("Enter roll no of record you want to delete:");
  scanf("%d",&r);
  fseek(fp,0,2);
  size=ftell(fp)/sizeof(student);
  //printf("%d",size);
  rewind(fp);
  buf=malloc(size*sizeof(student));
  fread(buf,sizeof(v),size,fp);
  fclose(fp);
for(i=0;i<size;i++)
{
  if((buf[i].rollno)==r)
{ 
   printf("%d",i);
  memmove(buf+i,buf+i+1,(size-i-1)*sizeof(student));
      break;
}
}
 if(i==size)
 {
   printf("No matching record to delete:"); 
    return;
 }
  fp=fopen("STUDENT.DAT","w");
  fwrite(buf,sizeof(v),size-1,fp);
  fclose(fp);
}
