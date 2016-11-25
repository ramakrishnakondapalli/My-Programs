//for pointer use arrow for variable use .
#include<stdio.h>
struct student

            {   char name[20];     
                int rollno;
                float marks;
               
             };
struct student1{
                  char name[20];
                  int rollno;
                  struct student c;
              };
main()
{
  //struct student  v1;
  struct student1  v2={"Ramesh",63,76};
  struct student v1={"Suresh",52,78};
  printf("%s\n %d\n %f\n",v2.c.name,v2.c.rollno,v2.c.marks);


}
