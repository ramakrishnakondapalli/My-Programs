#include<iostream>
#include<cstring>
using namespace std;
class Balaguruswamy
{


public: virtual void example();

};
class C:public Balaguruswamy
{

 public:void example()
   {
     cout<<"C Written by Balagurusawamy"<<endl;
   }

};
class Oops:public C
{

public:void example()
{

cout<<"C++ Written by Balaguruswamy"<<endl;
}


};
main()
{

C *e1;
e1->example();
Oops *e2;
e2->example();

}
