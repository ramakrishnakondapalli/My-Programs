#include<stdio.h>
main(int argc , char **argv)
{
  printf("process : %d",getpid());
  printf("%s",argv[1]);
  system(argv[1]);
  system(argv[2]);
  system(argv[3]);
  system(argv[4]);
  
  printf("process exiting");



}
