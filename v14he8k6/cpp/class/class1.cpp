#include<iostream>
#include<cstring>
using namespace std;
class Employee{
               int empid[5];
               char name[10];
               char dsgntn[20];
               int sal;
            public:void getdata()
                   {
                    cout<<"Enter Employee ID:"<<endl;
                    cin>>empid;

                    cout<<"Enter NAME:"<<endl;
                    cin>>name;

                    cout<<"Enter Designation"<<endl;
                    cin>>dsgntn;

                    cout<<"Enter Salary"<<endl;
                    cin>>sal;

                  }
             public: void display()
                   {

                    cout<<"Employee name:"<<name<<endl;
                    cout<<"Employee ID:"<<empid<<endl;
                    cout<<"Employee Designation"<<dsgntn<<endl;
                    cout<<"Salary:"<<sal<<endl;
                   }

               };
main()
{
  int sal;
  char dsgntn;
   Employee nu;
  nu.getdata();
//  if(sal<10000)
   {
//      promotion(sal,dsgntn);
   }
    nu.display();

}
 void promotion(int sal,char *designation)
   {

    if(sal<10000)
     {
      sal+=5000;
      strcpy(designation,"Associate Engineer");
     }
  
  }



