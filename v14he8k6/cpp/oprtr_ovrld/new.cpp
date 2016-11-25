#include<iostream>
#include<cstring>
using namespace std;
class neu
{
  int i,size;
  char *str;  
public:void display()
   {
     cout<<"The contents present in variable are: "<<endl;
      for(i=0;i<size;i++)
       {cout<<str<<endl; }
   }
  void* operator new(size_t size)
   {  str=malloc(size*sizeof(char));
      if(str==NULL)
        cout<<"In valid memory allocation"<<endl;
      return str;
   }
};
main()
{
neu p,s;
int* x=new(12);

}
