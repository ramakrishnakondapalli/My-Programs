#include<iostream>
#include<cstring>
using namespace std;
class object{
           int feet,inches;
         public: void getheight(int f,int i)
            {
               int feet=f;int inches=i;
            }
          public: void putheight()
              {
                cout<<"Height is:"<<feet<<"feet\t"<<inches<<"inches\t"<<endl;
              }
          public: void sum(object a,object b)
             {
               object n;
                n.feet=a.feet+b.feet;
                n.inches=a.inches+b.inches;
                 if(n.inches==12)
                   {
                       n.feet++;
                       n.inches=n.inches-12;
                   }
        cout<<"Height is:"<<n.feet<<"feet\t"<<n.inches<<"inches\t"<<endl;
             }

            };
main()
{
object h,d,a;
h.getheight(5,7);
h.putheight();
a.getheight(3,1);
a.putheight();
d.sum(h,a);

}
