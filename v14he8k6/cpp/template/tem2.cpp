#include<iostream>
#include<cstring>
using namespace std;
template<class any>
/*any Getmax(any a,any b)
{
  cout<<a+b<<endl;

}*/
class Vector   //vector is a template  
{
any size;
any *ptr;
public:Vector()
{
cout<<"Enter number of elements"<<endl;
cin>>size;
ptr=new any[size];
}
Vector(any *p,any n)
{
   for(int i=0;i<n;i++)
    cout<<p[i]<<endl;
}
any vector( any a,any b,any c)
{
   
   cout<<(a+b+c)<<endl;
}

};
main()
{
Vector<float>obj1("ramakrishna",11);        // as vector is a  template we  are giving arguements
obj1.vector(2,3.2,5);


}
