#include<iostream>
using namespace std;
#include<fstream>
class Employee
{




};
main()
{
ofstream outf("f1");
if(!outf)
{
 cout<<"File not created"<<endl;
 
}
outf<<"Hi"<<endl;
outf<<"My name is Ramakrishna"<<endl;

}
