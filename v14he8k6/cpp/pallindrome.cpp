#include<iostream>
using namespace std;
main()
{
  char str[10];
  int i=0,n;
   cout<<"Enter odd digited  number "<<endl;
   cin>>str;
   n=strlen(str);
    for(i=0;i<(n-1)/2;i++)
     {
        if(str[i]!=str[n-i])
          {
              break;
            }
     }
   if(i==(n-1)/2)
    {
          cout<<"Given integer is pallindrome"<<endl;
     }
  else
     cout<<"Given integer is not pallindrome"<<endl;

}
