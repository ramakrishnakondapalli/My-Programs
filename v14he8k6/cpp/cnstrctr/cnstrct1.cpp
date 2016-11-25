#include<iostream>
#include<cstring>
using namespace std;
class student
   {
   int roll_no;

   char *name;
   float marks;
    public:  student()
       {
       /*  cout<<"Enter roll no"<<endl;
          cin>>roll;
          cout<<"Enter name"<<endl;
          cin>>name;
          cout<<"Enter marks"<<endl;
          cin>>marks;*/
       cout<<"In default constructor:"<<endl;
           roll_no=5;name=new char[10];name="ramakrishna";
             marks=71.2;
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
  student obj;
  
  obj.display();

}
