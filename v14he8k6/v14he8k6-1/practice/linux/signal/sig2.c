#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
int p;
void isr(int n)
{
  printf("In isr\n");
  printf("%d\n",n);
   kill(p,9);

}
main()
{
struct sigaction v,u;
v.sa_flags=0;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
sigaction(SIGCHLD,&v,&u);
if((p=fork())==0)
{
printf("In child %d %d",getpid(),getppid());
sleep(2);
//while(1);  
}
else
{
  
printf("In parent %d %d",getpid(),getppid());
while(1);
}



}

