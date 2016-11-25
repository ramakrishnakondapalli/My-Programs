#include"single.cpp"
class sports:virtual protected student
{
protected: int sgrade;
           float marks;
   public:sports()
       {
        cout<<"In default constructor:"<<endl;
       }
      sports(int r,char *str,float f,int s)
        {
         cout<<"In parmetarised con:"<<endl;
              roll=r;
              name=str;
              marks=f;
             sgrade=s;
        }
      void display()
       {
         cout<<"In Child display"<<endl;
         cout<<"Name:"<<name<<endl<<"roll"<<roll<<endl<<"Marks:"<<marks<<endl<<"Sgrade:"<<sgrade<<endl; 
           
       }
     ~sports()
       {
         cout<<"In child destructor"<<endl;
       }
};
main()
{
sports s1(1,"ramakrishna",71.2,70);
s1.display();

}
