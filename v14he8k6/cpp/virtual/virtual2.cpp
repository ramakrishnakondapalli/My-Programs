#include<iostream>
#include<cstring>
using namespace std;
class student{
public:int roll_no;
       char name[10];
 void getdata()
{
 cout<<"Pointer acts as a type of pointer"<<endl<<endl;
cout<<"Enter roll no:"<<endl;
cin>>roll_no;
cout<<"Enter name:"<<endl;
cin>>name;

}
 void display()
{
cout<<"Student details are:"<<endl;
cout<<"Name:"<<name<<"roll no:"<<roll_no<<endl;

}


};
class Department:public student
{

 public: float marks[3];
  
   virtual void getdata()
  {
   int i;
   cout<<"Enter marks:"<<endl;
   for(i=0;i<3;i++)
   {
     cin>>marks[i];
   }

  }
 virtual void display()
 { int i;
   cout<<"Pointer acts as address it stores:"<<endl<<endl;
   cout<<"Student details:"<<endl;
   cout<<"Name:"<<name<<endl<<"roll:"<<roll_no<<endl<<"Marks:"<<endl;
   for(i=0;i<3;i++)
   {
     cout<<marks[i]<<endl;
   }
 }

};
main()
{

  student s1;
 // s1.getdata();
  Department D;
  student *ptr;
  ptr=&D;
  ptr->getdata();
   D.getdata();
  ptr->display(); 


}
