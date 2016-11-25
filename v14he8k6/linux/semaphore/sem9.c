#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<signal.h>
#include<unistd.h>
#include<semaphore.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include"headers.h"
#include<pthread.h>
main()
{
 int semId,semval,fd,i,j;
 struct sembuf v1,v2;
 pthread_t tid1,tid2;
 char rdbuf1[20],rdbuf2[20];
 pthread_mutex_t m1,m2;
        if(fork()==0)
         {
           printf("In child process %d\n",getpid());
           printf("Enter message\n");
           scanf("%s",rdbuf1);
          // printf("%s\n",rdbuf1);
           for(i=0;rdbuf1[i];i++)
           {
            pthread_mutex_lock(&m2);
           write(fd,&rdbuf1[i],1);
           printf("%c\n",rdbuf1[i]);
           pthread_mutex_unlock(&m1);
           }
         }
         else
         {
           printf("In Parent process\n");
           printf("Enter message2\n");
           scanf("%s",rdbuf2);
          // printf("%s\n",rdbuf2);
           for(j=0;rdbuf2[j];j++)
           {
            pthread_mutex_lock(&m1);
           write(fd,&rdbuf2[j],1);
           printf("%c\n",rdbuf1[j]);
           pthread_mutex_unlock(&m2);
           }
         }

close(fd);
}
