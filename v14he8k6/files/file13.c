//sorting student record by command ./sortecord
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
                        char name[20];
                        int rollno;
                        float marks;
                      }student;
main()
{ 
  student v,*ptr,*buf;
  FILE *fp;
  float f;
  int i=0,r,size=0,n=0,j;
  fp=fopen("STUDENT.DAT","r");
if(fp==NULL)
{ 
  printf("File not exists");
}
if(fread(&v,sizeof(v),1,fp)==0)
{
         printf("No records present to sort:\n");
            return;
}
  fseek(fp,0,2);
  size=ftell(fp)/sizeof(student); 
  rewind(fp);
  buf=malloc(size*sizeof(student));
  ptr=malloc(size*sizeof(student));
for(i=0;i<size;i++)
{
  fread(buf+i,sizeof(v),1,fp);
} 
  fclose(fp);
for(i=0;i<size;i++)
{
  for(j=0;j<size-1;j++)
  {
  if((buf[j].rollno)>(buf[j+1].rollno))
   {
         printf("%d %d %d\n",buf[j].rollno,buf[j+1].rollno,i);
      memmove(ptr+j,buf+j,sizeof(student));
        //buf[i].name=buf[i+1].name; 
        //buf[i].rollno=buf[i+1].rollno;
        //buf[i].marks=buf[i+1].marks;
      memmove(buf+j,buf+j+1,sizeof(student));
      memmove(buf+j+1,ptr+j,sizeof(student));
      
     
  }
 }
}
   fp=fopen("STUDENT.DAT","w");
   fwrite(buf,sizeof(v),size,fp);
  fclose(fp);

}
