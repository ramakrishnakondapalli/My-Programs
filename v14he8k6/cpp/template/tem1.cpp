#include<iostream>
#include<cstring>
using namespace std;
template<class any>
class any{
   any()
    {
    cout<<"In default constructor"<<endl;
    }
 void Getmax(any a,any b)
  {
   cout<<"In template function"<<endl;
   cout<<a+b<<endl;
  }
};
main()
{
any<float>obj1;

obj1.Getmax(1.2,5.3);
Getmax(1,2);

}
