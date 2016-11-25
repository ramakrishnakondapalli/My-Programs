#include<iostream>
using namespace std;
main()
{
int num1,num2,num3;
cout<<"Enter num1 and num2"<<endl;
cin>>num1>>num2;
 
try
{
if(num2!=0)
  {
    num3=num1/num2;
    cout<<num3<<endl;
  }
   throw num2;
}
catch(...)
{
cout<<"Divisible by num2 is not passible"<<endl;
cout<<"Enter num2 othr than zero"<<endl;

}

}
