#include"headers.h"
int main()
{
int fd;
struct ifreq ifr;
fd=socket(AF_INET,SOCK_STREAM,0);
if(fd==-1)
{
  perror("socket");
  return;
}
strcpy(ifr.ifr_name,"eth1");
if(ioctl(fd,SIOCGIFADDR,&ifr)<0)
 {
     perror("ioctl");return;
  }
printf("IP:%s\n",inet_ntos(((struct sockaddr_in *)&ifr.ifr_addr)->sin.addr));
if(ioctl(fd,SIOCGIFMTU,&ifr)<0)
{
   perror("ioctl");return;
 }
printf("MTU:%d",ifr.ifr_mtu);
if(ioctl(fd,SIOCGIFHWADDR,&ifr)<0)
{
  perror("ioctl");return;
}
unsigned char MAC[6],i;
for(i=0;i<6;i++)
{
  MAC[i]=ifr.ifr_hwaddr.sa_data[i];
printf("MAC :%.2x:%.2x:%.2x:%.2x:%.2x:%.2x",MAC[0],MAC[1],MAC[2],MAC[3],MAC[4],MAC[5]);

}
close(fd);






}
