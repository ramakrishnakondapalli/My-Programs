#include<iostream>
using namespace std;
main()
{
  int a=20,b=10;
  int &ref=a;
  ref++;
  cout<<"a: ref:"<<a<<ref<<endl;
   int &ref1=b;
   ref+=10;
   ref1+=10;
   cout<<"a: ref: ref1:"<<a<<ref<<ref1<<endl;

}
