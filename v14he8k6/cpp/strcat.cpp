///////////////string comncatenation/////////////
#include<iostream>
#include<string.h>
using namespace std;
main()
{
   int m,n,i;
   char str1[10],str2[10],str_cat[20]={'\0'};
   cout<<"Enter string1:"<<endl;
   cin>>str1;
   cout<<"Enter string 2:"<<endl;
   cin>>str2;
  m=strlen(str1);
  n=strlen(str2);
  for(i=0;i<m;i++)
  {
   str_cat[i]=str1[i];
  }
   
  for(i=0;i<n;i++)
   {
    str_cat[m+i]=str2[i];
   }
  cout<<str_cat<<endl;

}
