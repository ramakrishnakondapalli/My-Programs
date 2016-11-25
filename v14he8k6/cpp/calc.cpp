#include<iostream>
using namespace std;
main()
{

   int x,y;
   char ch;
   cout<<"Enter a and b"<<endl;
   cin>>x>>y;
   cout<<"Enter operation you want to perform"<<endl;
  cin>>ch;
  switch(ch)
  {
    case '+': cout<<"Addition of x and y is "<<x+y<<endl;
                break;
    case '-': cout<<"Subtraction of x and y is "<<x-y<<endl;
               break;
    case '*': cout<<"Multiplication of x and y is "<<x*y<<endl;
               break;
     case '/': cout<<"Division of x and y is "<<x/y<<endl;
               break;


  }



}
