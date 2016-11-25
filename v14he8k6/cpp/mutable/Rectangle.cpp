#include<iostream>
#include<cstring>
using namespace std;
class Rectangle
    {

    static int cnt;
    static int length,breadth;
         float area;
        public: void getdata()
                {
                  cout<<"Enter length and breadth"<<endl;
                  cin>>length>>breadth;

                 }   
           public:  void Area()
                   {
                      area=length*breadth; 
                       cout<<"Area is:"<<area<<endl;
                   }
     };
   int cnt;
main()
{
 Rectangle obj;
  obj.getdata();
obj.Area();







}
