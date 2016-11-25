#include<iostream>
using namespace std;
#include<fstream>
class Employee
{




};
main()
{
ifstream inf("f1");
if(!inf)
{
 cout<<"File not Exist"<<endl;
}
char str;
while(inf)
{
inf>>str;
cout<<str<<endl;
}
}
