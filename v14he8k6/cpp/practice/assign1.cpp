#include<iostream>
#include<cstring>
using namespace std;
class student
{
public:int roll_no;
       char name;
  void getdata()
  { 
    cout<<"Enter rollno "<<endl;
    cin >> roll_no;
    cout<<"Enter name"<<endl;
    cin>>name;
  }
  void display()
  {
    cout<<"Name:"<<name<<"roll:"<<roll_no<<endl;
  }

};
main()
{
int i;
student s[10];
for(i=0;i<10;i++)
s[i].getdata();
/*cout<<"Student Details are:"<<endl;
for(i=0;i<10;i++)
s[i].display();*/
ofstream outf("f2");
if(!outf)
cout<<"File not created"<<endl;
for(i=0;i<10;i++)
outf<<"Name:"<<s[i].name<<"\t"<<"roll_no:"<<s[i].roll_no<<endl;


}
