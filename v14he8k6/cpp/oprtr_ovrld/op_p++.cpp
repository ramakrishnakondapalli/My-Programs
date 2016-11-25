#include<iostream>
#include<cstring>
using namespace std;
class post_inc
{
  int p;
  public:post_inc()
  {
   cout<<"Enter num:"<<endl;
    cin>>p;
  }  
  void display()
   {
    cout<<"Number is"<<p<<endl;
   }
  void operator ++(int )
   {
     p++;
    cout<<"In operator overloading"<<endl;
    cout<<"After post Increment"<<p<<endl;
   }
};
main()
{
  
post_inc e1;
e1.display();
e1++;
e1.display();

}
