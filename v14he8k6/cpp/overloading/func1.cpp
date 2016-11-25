#include<iostream>
using namespace std;
void add(int,int,int c=5);
//void add(int,int);
main()
{
  int a,b,c;
  add(10,20);
  add(20,30);
  //add(30,40);

}
  void add(int a,int b,int c )
   {
       cout<<"In function 1:"<<"sum is:"<<a+b+c<<endl;
   }
