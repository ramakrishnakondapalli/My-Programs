#include<iostream>
#include<string.h>
using namespace std;
class add_num{

        int num,i,sum;
     public:void getdata()
             {
                 sum=0;
               for(i=0;i<20;i++)
              {   
                cout<<"Enter number"<<endl;
                cin>>num;
                if(num==0)
                   break;
                 else             
                   sum+=num;
               }    
             }
        public:void display()
               {
                  cout<<"sum is:"<<sum<<endl;
                }
              };
main()
{
add_num n1;
n1.getdata();
n1.display();
}
