#include<stdio.h>

main()
{
int i=1,j=1,k=1;
//printf("%d %d %d",i--+j,i,j);   //for pre increment first value is incremented
printf("%d %d %d\n",++i,i++,i++); // then final value is assigned after evaluati
printf("%d %d %d\n",i++,i++,i++);//from R->L final value is assigned to all preiinc
//printf("%d",i);
printf("%d %d %d\n",++i,i++,i++);  //for post increment first value is assigned 
                                   //then while evaluated from right to left
printf("%d %d %d\n",++i,++i,i++);

printf("%d %d %d\n",i++,i++,i++);

printf("%d %d %d",++i,++i,++i);

//printf("%d",++i);






}
