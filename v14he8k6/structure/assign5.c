#include<stdio.h>
main()
{
 struct student{
                 int bit1:5;
                 
                 int bit2:8;
                 char bit3:8;
                }bit={15,63,63};

  printf("%d %d %d\n",bit.bit1,bit.bit2,bit.bit3);
  printf(" %d",sizeof(bit));

}
