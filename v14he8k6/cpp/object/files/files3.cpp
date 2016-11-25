#include<fstream>
#include<iostream>
using namespace std;
main()
{
  ifstream inf("f1");
  char str[20];
  if(!inf)
   cerr<<"File Not Exists!";
 ofstream outf("f2",ios::out);
 if(!outf)
  cout<<"File Not Created";
  while(inf)
  {
   inf>>str;
   cout<<str;
   outf<<str;
   }
//  outf<<"Hi";
}
