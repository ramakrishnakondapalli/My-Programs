#include<stdio.h>
struct student 
     {
       char name[20];
       int rollno;
       float marks;
     };
main()
{
  char ch,i,d,m,f,a;
  struct student s[10];
  // input(s);
  printf("Enter choice:");
  scanf("%c",&ch);
  switch(ch)
   {
     case 'i' : input(s);
                break;
     case 'd' : delete(s);
                break;
     case 'm' : modify(s);
                break;
     case 'f' : search(s);
                break;
     case 'a' : sort(s);
                break;

  }
  
}
 void input(struct student *p)
{
   int i;
   printf("Enter student  Details:");
 for(i=0;i<10;i++)
 {
   printf("Enter name:");
   scanf("%s",(p+i).name);
   printf("Enter roll no:");
   scanf("%d",(p+i).rollno);
   printf("Enter name:");
   scanf("%f",(p+i).marks);
 }
}
 void delete(struct student *p)
{ 
  int i;
  char name1[20];
   printf("Enter student name to delete:");
   scanf("%s",*p);
   printf("Enter student roll no:");
   scanf("%d",(p+v).rollno);
   printf("Enter student marks:");
   scanf("%f",(p+v).marks);
} 
