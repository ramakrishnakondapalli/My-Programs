//adding student record by command ./addrecord
#include<stdio.h>
typedef struct student{
                        char name[20];
                        int rollno;
                        float marks;
                      }student;
main()
{ 
  student v,*ptr=NULL;
  FILE *fp;
  int i,n=0;
  fp=fopen("STUDENT.DAT","w");
   if(fp==NULL)
  { 
  printf("File not exists");
  return;
  } 
  printf("Enter no of records you want to add");
  scanf("%d",&n);
//  printf("Size of ptr is: %d\n",sizeof(*ptr));
  ptr=realloc(ptr,n*sizeof(student));

for(i=0;i<n;i++)
{
  printf("Enter name of student");
  scanf("%s",&(ptr+i)->name);
  printf("Enter rollno");
  scanf("%d",&((ptr+i)->rollno));
  printf("Enter marks");
  scanf("%f",&((ptr+i)->marks));
  fwrite((ptr+i),sizeof(v),1,fp);
  
} 
for(i=0;i<n;i++)
{
    printf("%s\t %d\t %f\t",ptr[i].name,ptr[i].rollno,ptr[i].marks);
   
}
  fclose(fp);

}
