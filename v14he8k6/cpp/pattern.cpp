#include<iostream>
using namespace std;
main()
{
   int i=0,n,j;
    cout<<"Enter n"<<endl;
    cin>>n;
    
   for(i=1;i<=n;i++)
     {
        for(j=0;j<=n-i+1;j++)
         {
           cout<<" ";
         }
       if(i%2!=0)
       {
          for(j=1;j<=2*i-1;j+=2)
           {
             cout<<j*j<<" ";
           }
      }
     else
      {
         for(j=2;j<=2*i+1;j+=2)
           {
               cout<<j*j<<" ";
           }
      }
        cout<<endl;
     }

}
