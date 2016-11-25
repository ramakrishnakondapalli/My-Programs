#include<iostream>
using namespace std;int i;
  struct student{
                 char name[10];
                 int roll;
                 int marks[5];
                public:
	  public: void getdata()
                {
                  cout<<"Enter name"<<endl;
                  cin>>name;
                           
                  cout<<"Enter roll no"<<endl;
                  cin>>roll;
                                
                  cout<<"Enter marks"<<endl;
                 for(i=0;i<6;i++)
                   {
                    cin>>marks[i];
                   }
                 
                /* for(i=0;i<6;i++)
                   {
                    cout<<marks[i]<<endl;
                   }*/
                } 
		
                };
main()
{
  student st;
   int i,total=0;
	st.getdata();
        for(i=0;i<5;i++)
          total+=st.marks[i];
          total/=5;
        if(total<40)
           cout<<"FAIL"<<endl;
        else if(40<total<50)
             cout<<"THIRD CLASS"<<endl;
        else if(50<total<60)
             cout<<"SECOND CLASS"<<endl;
        else if(60<total<70)
             cout<<"THIRD CLASS"<<endl;
         else
             cout<<"DISTINCTION"<<endl;


}
