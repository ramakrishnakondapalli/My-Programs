#include<iostream>
using namespace std;
class ABC
{
  int x;
  public:ABC()  //if any member of class is declared as a virtual then it's size is the sum of individual members
         {
           x=10;
         }
         ABC(int r=10)
        {
           
        }
        virtual void display()
        {
           cout<<x<<endl;
        }
};
main()
{
cout<<sizeof(ABC)<<endl;


}
