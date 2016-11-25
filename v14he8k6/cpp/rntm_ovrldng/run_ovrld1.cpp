#include<iostream>
using namespace std;
class student
  {
   protected: int roll;
   char *name;
    float marks;
    public:student()
           {
            cout<<"In parent constructor"<<endl;

           }
         student(int r,char *str,float f)
           {
              cout<<"In parent parametarised constructor"<<endl;
           }
     virtual void display()
         {
          cout<<"In parent display:"<<endl;
           cout<<"student details are:"<<endl;
           cout<<"Name:"<<name<<"roll:"<<roll<<"Marks:"<<marks<<endl;
         }

   };
class Department:protected student
{
 char *dept;
  public:Department()
   {
    cout<<"In child Default constructor"<<endl;
   }
  Department(int r,char *str,float f,char *dep)
   {
    cout<<"In child parametarised constructor"<<endl;
       roll=r;
       name=str;
       marks=f;
       dept=dep;
   }
  void display()
   {
    cout<<"In child display:"<<endl;
   cout<<"Name:"<<name<<endl<<"roll:"<<roll<<endl<<"Marks:"<<marks<<endl<<"Depatment:"<<dept<<endl;

   }
};
main()
{
student *ptr;
ptr=new Department(1,"ramakrishna",71.2,"ECE");
ptr->display();
//s1.display();

}
