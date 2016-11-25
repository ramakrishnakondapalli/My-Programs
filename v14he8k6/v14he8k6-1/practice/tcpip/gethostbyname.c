#include<stdio.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netdb.h>
main()
{
struct hostent *hst;
hst=gethostbyname("192.168.1.112");
printf("%s",hst->h_name);




}
