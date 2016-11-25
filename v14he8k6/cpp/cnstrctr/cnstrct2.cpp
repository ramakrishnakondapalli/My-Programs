#include<iostream>
#include<cstring>
using namespace std;
class student
   {
   int roll_no;

   char *name;
   float marks;
    public:  student(int r,char *p,float f)
       {  cout<<"In parametarized constructor:"<<endl;
         roll_no=r;
          name=new char[10];
           strcpy(name,p);
             marks=f;
       }
    public: void display()
       {
        cout<<roll_no<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
       }
    
   };
main()
{
  student obj(51,"ramakrishna",71.2);
    
  obj.display();

}
