#include<iostream>
using namespace std;

main()
{
   int num,i=0;
   cout<<"Enter number"<<endl;
   cin>>num;
  while(num>0)   
   {
      num/=10;
      i++;
   }
   cout<<"No of digits of given number are "<<i++<<endl;
}
