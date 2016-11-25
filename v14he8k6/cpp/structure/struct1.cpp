#include<iostream>
using namespace std;
main()
{
  struct time{
               int hours;
               int mins;
               int secs;
             };

 struct time t;
  int ch;
 cout<<"Enter time in hours"<<endl;
  cin>>t.hours;

 cout<<"Enter time in mins"<<endl;
  cin>>t.mins;

 cout<<"Enter time in secs"<<endl;
  cin>>t.secs;
   
     cout<<"Enter choice:1.Regular format 2.Railway format"<<endl;
      cin>>ch;
    
    switch(ch)
     {

      case 1: if(t.hours>12) 
               {
                  t.hours-=12;
                  cout<<"TIME:"<<t.hours<<":"<<t.mins<<":"<<t.secs<<" PM"<<endl;
                  break;
                }
                 else 
                 {
                
                  cout<<"TIME:"<<t.hours<<":"<<t.mins<<":"<<t.secs<<" AM"<<endl;
                  break;
                  }
   case 2:  
                 cout<<"TIME:"<<t.hours<<":"<<t.mins<<":"<<t.secs<<endl;
                   break;

     }






}
