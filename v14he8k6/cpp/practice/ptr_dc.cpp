#include<iostream>
using namespace std; 
class BC
{
public: int b;
public:void show()
{
  cout<<"b="<<b<<endl;
}

};
class DC:public BC
{
 int c;
 char name[15];
void show()
{
  cout<<"b="<<b<<endl;
  cout<<"c="<<c<<endl;
}

};
class  A
{
int a,b;

void show()
{
   cout<<"In A"<<endl;
}
};
main()
{

BC *ptr;
printf("%d",sizeof(ptr));
//ptr->b=5;
//ptr->show();
DC d;
A a;
ptr=&d;
ptr->show();

}
