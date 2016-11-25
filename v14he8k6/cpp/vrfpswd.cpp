#include<iostream>
#include<string.h>
using namespace std;
main()
{
  char passwd[10];
  int i,n;
 cout<<"Enter password"<<endl;
  system("stty-echo");
 cin>>passwd;
cout<<"*********"<<endl;
system("stty-echo");
 n=strlen(passwd);
  for(i=0;i<n;i++)
  {
    if(passwd[i]!='i')
      break;

  }
  if(i!=n)
  cout<<"Password is incorrect"<<endl;

}
