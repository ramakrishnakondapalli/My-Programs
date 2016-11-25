#include<iostream>
#include<cstring>
using namespace std;
class factorial
{
  int num,i,fact;

  public:void getdata()
      {
        cout<<"Enter num"<<endl;
         cin>>num;
         fact=1;
      }
  public: void cal_fact()
     {
        for(i=num;i>1;i--)
          {   
              fact=fact*num;
               num--;
          }
        cout<<"Factorial is:"<<fact<<endl;
     }

};
main()
{
factorial fact;
fact.getdata();
fact.cal_fact();

}
