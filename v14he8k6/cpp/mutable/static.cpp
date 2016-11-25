#include<iostream>
#include<cstring>
using namespace std;
class ABC
    {
     int x;
    static int y;
  
        public: void getdata(int a)
                {
                    x=a;
                    y++;

                 }   
           public:  void display()
                   {
                      x=90; 
                       cout<<endl<<y<<endl;
                       int z=50;
                   }
              void fun()
               {
                 cout<<"y:"<<y<<endl;
               }
     };
  int ABC::y;
   
main()
{

 ABC obj;
  obj.getdata(2);
obj.display();
obj.fun();

}
