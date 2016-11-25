#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void sigHandler(int n,siginfo_t *siginfo,void *ignore)
{
printf("In signal handler received from %d\n",siginfo->si_pid);
return;
}
main()
{
   pid_t ret;
   int n;
   int status; 
   if(ret=fork())
      {
        printf("In parent\n");
        wait(&status);
      }
    else if(ret==0)
      {
        printf("In child\n");    
    struct sigaction new_act;
    //sigaction(SIGUSR1,&new_act,0);
     //  new_act.sa_handler=isr;
       new_act.sa_sigaction=sigHandler;
       // wait(&status);
    sigaction(SIGUSR1,&new_act,0);
    }
   

}

/*void isr()
{



}*/
