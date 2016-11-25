#include<iostream>
using namespace std;
struct test {
  int x,y;
   test(int x=0,int y=0)
   {
     this ->x = x;
     this ->y = y;
   }
  void fun1()
  {
   cout<<"Inside fun";
   this->fun1();
  }


};
main()
{
  test obj;
  obj.fun1();
}
