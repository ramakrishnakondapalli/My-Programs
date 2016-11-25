#include<iostream>
#include<string.h>
using namespace std;
typedef struct bank{
                    char acc_no[10];
                    char name[20];
                    int age;
                    int bal;
                   }BANK;
void deposit(struct bank *);
void withdraw(struct bank *);
void balance(struct bank *);
void create(struct bank *);
int cnt=0;
main()
{
   char ch;
   struct bank a[10];
 cout<<"******Welcome To SBI:******"<<endl;
 while(1)
 { 
cout<<"Enter choice:"<<endl<<" 1.Deposit "<<endl<<"2.Withdraw"<<endl<<"3.Balance"<<endl<<"4.create account"<<endl<<"5.Exit"<<endl;
  cin>>ch;
   switch(ch) 
  {

   case '1' : deposit(a);
            break;
   case '2' : withdraw(a);
            break;
   case '3' : balance(a);
             break;
   case '4' : create(a);
            break;
    case '5': return(0); 
  
  }
}
}
 
 void deposit(BANK *p)
  {
   int amnt,i,j;
  char accno[10];
   if(cnt==0)
   {
      cout<<"No Accounts present to Deposit"<<endl;
   }
    cout<<"Enter acount number:"<<endl;
    cin>>accno;
     
     for(i=0;i<cnt;i++)
     {
       if(strcmp(p[i].acc_no,accno))
        {
         
           cout<<"Enter Amount to Deposit:"<<endl;
           cin>>amnt;
           p[i].bal=0;
           p[i].bal+=amnt;
           cout<<"Available balance in your account is:"<<p[i].bal<<endl;
         }
       else
         {
            cout<<"Invalid account no:"<<endl;
            cout<<p[i].acc_no<<endl;
         } 
     }
  }
  void withdraw(BANK *p)
   {
     int amnt,i,acno,l=0;
     char accno[10]; 
     cout<<"Enter Account no:"<<endl;
      cin>>accno;  
       for(i=0;i<cnt;i++)
        {
           if(strcmp(p[i].acc_no,accno))
            {
               cout<<"Enter Amount to Withdraw:"<<endl;
                cin>>amnt;
                if(p[i].bal<amnt)
                   {
                     cout<<"Insufficient funds:"<<endl;
                   }
                p[i].bal-=amnt;
               cout<<"Available Balance in your accoun is:"<<p[i].bal<<endl;l++;
                break;
             }
             
           
        }  
      if(l!=1)
         cout<<"Invalid Account Number"<<endl;   
   }
  void balance(BANK *p)
   {
  int i,l=0;
  char accno[10];
  // p=calloc(1,sizeof(bank));
  cout<<"Enter Account number:"<<endl;
  cin>>accno;
   for(i=0;i<cnt;i++)
    {
      if(!strcmp(p[i].acc_no,accno))
        {
            cout<<"Available Balance in your account is:"<<p[i].bal<<endl;
               l++;
        }
      
              
    }
    if(l!=1)
     {
       cout<<"Invalid Account NUmber"<<endl;
     }   
   }
  void create(BANK *p)
  {
  
   int i=0,amnt=0;
   cout<<"Enter account number:"<<endl;
   cin>>p[cnt].acc_no;
   cout<<"Enter Name:"<<endl;
   cin>>p[cnt].name;
   cout<<"Enter age:"<<endl;
   cin>>p[cnt].age;
   //cout<<"Enter amount:"<<endl;
   // cin>>amnt;    
        cnt++;

  }
