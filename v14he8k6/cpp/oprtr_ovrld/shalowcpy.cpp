#include<iostream>
using namespace std;
class rect
{
int len,bre;
public:rect()
	{
	len=10;
	bre=10;	
	}
	rect(int i,int j)
	{
	len=i;
	bre=j;
	}
	display()
	{
	cout<<"len and bredth"<<len<<bre;
	}
};
main()
{
rect a;
a.display();

}
