//modifying a student record by command ./modifyrecord
#include<stdio.h>
#include<stdlib.h>
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
     return;
} 
if(fread(&v,sizeof(v),1,fp)==0)
{
     printf("No records present:\n");
      return;
}
  printf("Enter roll no of record you want to modify:");
  scanf("%d",&r);
  fseek(fp,0,2);
  size=ftell(fp)/sizeof(student);
  rewind(fp);
  buf=malloc(size*sizeof(student));
  fread(buf,sizeof(v),size,fp);
  fclose(fp);
  printf("%d",size);
for(i=0;i<size;i++)
{
  if((buf[i].rollno)==r)
   {
    printf("Enter name of student\n");
    scanf("%s",(buf[i].name));
    printf("Enter rollno\n");
    scanf("%d",&(buf[i].rollno));
    printf("Enter marks\n");
    scanf("%f",&(buf[i].marks));
     break;
  }
}
   if(i==size)
   {
     printf("Record not found");
     return;
   } 
   fp=fopen("STUDENT.DAT","w");
   fwrite(buf,sizeof(v),size,fp);
  fclose(fp);

}
