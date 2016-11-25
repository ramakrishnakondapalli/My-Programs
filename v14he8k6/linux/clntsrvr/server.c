#include"headers.h"
main()
{
   int fd1,fd2,ch=0,n=0,sp=0,i;
   char rdbuf[40],wrbuf[3];
   fd1=open("fifo",O_RDWR);
   fd2=open("fifo1",O_RDWR);
   printf("%d",fd1);
   while(1)
  {
   //  printf("Enterstring");
   //   gets(rdbuf);
    read(fd1,rdbuf,20);
  
  
    close(0);
    close(1);
    close(2);
    printf(" %s ",rdbuf);
   for(i=0;rdbuf[i];i++)
    {
      if(((rdbuf[i]>='a')&&(rdbuf[i]<='z'))||((rdbuf[i]>='A')&&(rdbuf[i]<='Z')))
          ch++;
       else if((rdbuf[i]>='0')&&(rdbuf[i]<='9'))
            n++;
       else
           sp++;
    }
   wrbuf[0]=ch;
   wrbuf[1]=n;
   wrbuf[2]=sp;
    write(fd2,wrbuf,40);    
   if(strcmp(rdbuf,"QUIT")==0)
     break;
   }
   close(fd1);
   close(fd2);

}
