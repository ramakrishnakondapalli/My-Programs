#include<iostream>
#include<cstring>
using namespace std;
int gvalue=10;
void extra()
{
cout<<gvalue<<' ';
}
main()
{
  extra();
   {
   int gvalue=20;
   cout<<gvalue<<' ';
    cout<<:: gvalue<<' ';
  }

}
