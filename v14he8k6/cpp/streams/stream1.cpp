#include<iostream>
#include<fstream>
using namespace std;
main()
{
  ofstream out("data");
  out<<"Welcome to vector"<<endl<<endl;
  out<<"Embedded training institute"<<endl<<endl;
  out<<"C++ programming"<<endl;
  out.close();
 ifstream in("data");
 char ch[20];
 while(in)
 {
   in>>ch;cout<<ch;
 }

}
