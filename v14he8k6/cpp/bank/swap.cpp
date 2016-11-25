#include<iostream>
using namespace std;
void swap(int&,int&);
main()
{
 
 int a,b,z,x,y;
  
  
  cout<<"Enter a and b"<<endl;
  cin>>a>>b;
 swap(a,b);
 // cout<<"After swaping a and b are"<<z<<endl;
}
void swap(int &a,int &b)
{

  int c;
  int &ref=c;
   
  c=a;
  a=b;
  b=c;
  //return(b);
  cout<<"After swaping : a and b are"<<a<<"and"<<b<<endl;

}
