#include<iostream>
#include<cstring>
using namespace std;
class student
{
 public:// int roll_no;
  char *name;
  float marks;
   student()
   {
     cout<<"Enter roll no:"<<endl;
      cin>>roll_no;
     //roll_no=r;
     cout<<"Enter name"<<endl;
      name=new char[10];
     cin>>name;
     //strcpy(name,s);
     cout<<"Enter marks"<<endl;
     cin>>marks;
     //marks=f;
       
  }
  
 void display()
 {
  
   cout<<"************"<<endl;
   cout<<"rollno:"<<roll_no<<endl<<"Name"<<name<<endl<<"Marks:"<<marks<<endl;
 }
};
main()
{
int i,j,n,roll_no;
char name[15];
float marks;
cout<<"Enter n";
cin>>n;
student s[5],obj;
 int roll_no::roll_no;
 //  p=&student::roll_no;

/*for(i=0;i<n;i++) 
{
 cout<<"Enter rollno";
 cin>>roll_no;
 cout<<"Enter name";
 cin>>name;
 cout<<"Enter marks";
 cin>>marks;
student i=new student(roll_no,name,marks);
s[i].dislay();
}*/

for(i=0;i<n;i++)
  s[i].display();


}
