#include<iostream>
#include<cstring>
using namespace std;
class Complex
     {
       int real,img;
        public:Complex()
              {
                int real=0;
                int img=0;
              }
      Complex(int r,int i)
           {
              cout<<"In Constructor"<<endl;
                 real=r;
                 img=i;
        //     cout<<real<<"+i"<<img<<endl;
           }
        void display()
           {

             cout<<"The complex number is"<<real<<"+i"<<img<<endl;
           }  
      Complex operator+(Complex &e2)
         { 
            Complex e4;
            e4.real=real+e2.real;
            e4.img=img+e2.img;
            return e4;
          }
     };
main()
{

Complex e1(4,5);
e1.display();
Complex e2(5,6);
e2.display();
 Complex e3;
 e3=e1+e2;
e3.display();
}

     /* Complex operator+(Complex &e1,Complex &e2)
          {
            Complex e4;
            e4.real=e1.real+e2.real;
            e4.img=e1.img+e2.img;
            return e4;
          }*/
    
