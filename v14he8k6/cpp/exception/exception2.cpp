#include<iostream>
using namespace std;
main()
{
int *ptr;
try
{
ptr=new int[0xffffffffff];
}
catch(bad_alloc)
{

cout<<"bad allocation"<<endl;

}
}

