#include<stdio.h>
#include<signal.h>
main()
{

while(1)
  {
     system("ps -L|grep a.out");
     sleep(1);
  }

}
