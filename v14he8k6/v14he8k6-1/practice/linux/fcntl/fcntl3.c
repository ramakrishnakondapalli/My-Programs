#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/ipc.h>
main()
{
	int fd;
	struct flock lockbuf;
	printf("enter to cont: ");
	getchar();
	fd=open("datafile",O_RDWR);
	printf("file opened..\n");
	printf("enter to lock file\n");
	getchar();
	printf("Trying to take lock\n");
	lockbuf.l_type=F_WRLCK;
	lockbuf.l_whence=0;
	lockbuf.l_start=0;
	lockbuf.l_len=0;
	if(fcntl(fd,F_SETLKW,&lockbuf)<0)
		perror("fcntl");
	printf("LOCKED...\n");
	
	printf("enter to unlock\n");
	getchar();
	lockbuf.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&lockbuf);
	printf("LOCK released...\n");
	close(fd);
}

