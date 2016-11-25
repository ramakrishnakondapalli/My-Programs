#include<iostream>
using namespace std;
class FLOAT;
class INTEGER
      {
   int num1,num2;
   public:void getdata()
       {
          cout<<"Enter num1:"<<endl;
          cin>>num1;
          cout<<"Enter num2:"<<endl;
           cin>>num2;
       }
     friend void add(INTEGER,FLOAT);
      };
    class FLOAT
        {
       float num1,num2;
       public :void getdata()
       {
        cout<<"Enter num1"<<endl;
         cin>>num1;
        cout<<"Enter num2"<<endl;
          cin>>num2;
        }
      friend void add(INTEGER,FLOAT);
        };
   void add(INTEGER obj1,FLOAT obj2)
      {
        cout<<"Sum of Numbers is:"<<obj1.num1+obj2.num2<<endl;
        cout<<"Sum of Numbers is:"<<obj2.num1+obj1.num2<<endl;
      }
  main()
   {
    INTEGER obj1;
     obj1.getdata();
     

    FLOAT obj2;
      obj2.getdata();
      add(obj1,obj2);
   }
