#include"headers.h"
main()
{
  struct utimbuf v;
  struct timeb s;
  struct tm *tmptr;
  struct stat buf;
  char datestring[20];
  char timestring[20];
  time_t t;
  //v.actime=30062015;
  //v.modtime=30062015;

 
   printf("%s\n",t);
  tmptr=localtime(&t);
   strftime(datestring,20,"%F",tmptr);
   strftime(timestring,20,"%T",tmptr);
//    v.actime/=60;
//    v.modtime/=60;
    //.s.time/=3600;
    //s.millitm/=333600;
 // printf("%d %d\n",v.actime,v.modtime);
 // printf("%d %d",s.time,s.millitm);
  printf("%s   %s",datestring,timestring);
  printf("time in seconds elapsed from epoch:%d\n",tmptr->tm_sec);
  printf("time in minutes elapsed from epoch:%d\n",tmptr->tm_min);
  printf("time in hours elapsed from epoch:%d\n",tmptr->tm_hour);
  printf("time in month elapsed from epoch:%d\n",tmptr->tm_sec);
  printf("time in year elapsed from epoch:%d\n",tmptr->tm_sec);
  printf("time in day of week elapsed from epoch:%d\n",tmptr->tm_sec);
  printf("time in day year elapsed from epoch:%d\n",tmptr->tm_sec);
  printf("time in day light saving time elapsed from epoch:%d\n",tmptr->tm_sec);




  printf("time in seconds elapsed from epoch:%d\n",tmptr->tm_sec);





}
