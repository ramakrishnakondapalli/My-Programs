#include<iostream>
using namespace std;
class Circle;   //forward declaration 
class Rectangle
       {
       int len,bre,area;
       public:
              void getdata()
               {
                   cout<<"Enter length and breadth"<<endl; 
                   cin>>len>>bre;             
               }
          public: void calArea()
                 {
                    area=len*bre;
                 }
       friend void display(Rectangle); 
      };
  
  class Circle
          {
          int radius;
             float area;
           public:void getdata()
                  {
                    cout<<"Enter radius:"<<endl;
                    cin>>radius;
                  }
                void calArea()
                 {
                    area=3.14*radius*radius;
                  }
          friend void diplaiy(Circle);
           };

   void display(Rectangle obj)
    {
      cout<<"Area is:"<<obj.area<<endl;
    }
  
   void display(Circle obj)
    {
      cout<<"Area is:"<<obj.area<<endl;
    }
  
main()
{

  Rectangle obj;
  obj.getdata();  
  obj.calArea();
   display(obj);
   Circle obj1;
    obj1.getdata();
    obj1.calArea();
   display(obj1);
}
