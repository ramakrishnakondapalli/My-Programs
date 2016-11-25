#include<iostream>
#include<cstring>
class String
{
public: String(char *str);
 {
cout<<"In parametarised constructor"<<endl;
  cout<<"Given string is"<<str;
}
char * reverse()
{
  int i,n;char str1[10];
    n=strlen(str);
  for(i=0;strlen[i];i++)
     str1[i]=str[n-i+1];
   return str;
}
};
main()
{
char str[10],str2[10];

cout<<"Enter string"<<endl;
cin>>str;
String obj(str);
str2=obj.reverse();
cout<<"Reverse of string is"<<str2<<endl;

}
