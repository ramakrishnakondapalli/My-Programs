#include"headers.h"
pthread_t 
main()
{
printf("In main\n");
pthread_create(&tid1,NULL,f1,NULL);
pthread_ceate(&tid2,NULL,f2,NULL);

}
