#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
pthread_t tid1,tid2;
int data = 1;
pthread_mutex_t  m1=PTHREAD_MUTEX_INITIALIZER;
void *thread1(void *p)
{
		sleep(1);
	printf("thread1 entered..\n");
	/************code for synch. starts here************/
	pthread_mutex_lock(&m1);
	printf("thread1:data =%d\n ",data);
		data++;
	sleep(1);
	printf("thread1:data(inc) =%d\n ",data);
	pthread_mutex_unlock(&m1);
	/************ synchronising code ends *************/

	printf("thread1. exiting\n");
}
/*****************thread2 code**********/
void *thread2(void *p)
{
	printf(" thread2..entered.\n");
/****************************common data usage******/
	pthread_mutex_lock(&m1);
	printf("thread2:data =%d\n ",data);
		data++;
	sleep(10);
	printf("thread2:data(inc) =%d\n ",data);
	pthread_mutex_unlock(&m1);
/******************************/
	printf("thread 2 exiting.\n");

}
main()
{
	pthread_mutex_init(&m1,0);
	pthread_create(&tid1,0,thread1,0);
	pthread_create(&tid2,0,thread2,0);
	pthread_join(tid1,0);
	pthread_join(tid2,0);
	pthread_mutex_destroy(&m1);
}
