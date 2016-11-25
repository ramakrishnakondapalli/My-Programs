#include<iostream>
#include<cstring>
using namespace std;
main()
{
  int var = 1;
   int a[10];
  typedef int& ref;
  ref r1 = var;

  int & (&r2) = r1;
  cout<<r2<<endl;
  // r2++;
  cout<<r2<<endl;

}
