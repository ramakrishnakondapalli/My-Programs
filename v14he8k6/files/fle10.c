//adding student record by command ./addrecord
#include<stdio.h>
typedef struct student{
                        char name[20];
                        int rollno;
                        float marks;
                      }student;
main()
{ 
  student v;
  FILE *fp;
  int i;
  fp=fopen("STUDENT.DAT","a");
   if(fp==NULL)
{ 
  printf("File not exists");
} 
 printf("Enter name of student");
  scanf("%s",v.name);
  printf("Enter rollno");
  scanf("%d",&v.rollno);
  printf("Enter marks");
  scanf("%f",&v.marks);
  fwrite(&v,sizeof(v),1,fp);
  fclose(fp);

}
