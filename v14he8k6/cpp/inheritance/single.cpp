#include<iostream>
#include<cstring>
using namespace std;
class student
{
 protected:int roll;
 char *name;
    public:student()
         {
       cout<<"In default constructor:"<<endl;
         }
          student(int r, char *str)
           {
            cout<<"In parent parametarised constructor:"<<endl;
             roll=r;
             name=str;
            }
      void display()
        {
          cout<<"student details are:"<<endl;
          cout<<"NAME:"<<name<<"roll:"<<roll<<endl;
         }
       ~ student()   
        {
            cout<<"In parent Destructor:"<<endl;
        }
     
};
class Department:protected student
{
protected:float marks;
 public:Department(int r, char *str,float f):student(r,str)
   {
     cout<<"In Child parametarised Constructor"<<endl;
        marks=f;
   }  
   void display()
   {
      cout<<"In child display:"<<endl;
     cout<<"student details are:"<<endl;
cout<<"Name:"<<name<<endl<<"roll:"<<roll<<endl<<"Marks:"<<marks<<endl;
   }
  ~Department()
  {
   cout<<"In child Destructor"<<endl;
  }
};
main()
{
Department s1(1,"ramakrishna",71.2);
s1.display();



}
