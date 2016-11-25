//printing student record by command ./printrecord
#include<stdio.h>
typedef struct student{
                        char name[20];
                        int rollno;
                        float marks;
                      }student;
main()
{ 
  student v;
  student *p;
  FILE *fp;
  int i=0,cnt=0;
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
while((fread(&v,sizeof(v),1,fp))==1)
 {
  printf("Name of student:%s\n",v.name);
  printf("Rollno:%d\n",v.rollno);
  printf("Marks:%f\n",v.marks);
    //i++;
//  fclose(fp);
 }
   fclose(fp);
}
