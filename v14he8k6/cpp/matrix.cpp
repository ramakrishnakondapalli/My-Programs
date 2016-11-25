#include<iostream>
using namespace std;
class matrix
{
	public:int a[3][3],b[3][3],i,j,c[3][3],k;
    matrix()
   {
     cout<<"In default constructor"<<endl;
   }
   void getdata()
  {
     cout<<"Enter elements into matrix A"<<endl;
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
        {
            cin>>a[i][j];
            c[i][j]=0;
        }
     }
     cout<<"Enter elements into matrix B"<<endl;
     for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
         {
           cin>>b[i][j];
         }
      }
   }
  //friend int*mul(int**,int**);

  void mul()
   {
    int i,j; 
     
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
         {   
            for(k=0;k<3;k++)
             {
             c[i][j]+=a[i][k]*b[k][j];
             }
            cout<<c[i][j]<<" ";
               // <<endl;
         }
         cout<<endl;
             //cout<<c[i][j]<<" ";
      }
    // return c;
   }
};
main()
{
    matrix A,B,C;
    A.getdata();
    int i,j,(*p)[3];
    C.mul(); 
    cout<<"Multiplication of matrices is:"<<endl;
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
         {
           // cout<<p[i][j]<<" ";
               // <<endl;
         }
          cout<<endl;
     }
   

}
