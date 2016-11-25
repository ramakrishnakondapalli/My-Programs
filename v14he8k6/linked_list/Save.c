#include<stdio.h>
#include"myHeaders.h"
#include<stdlib.h>
void save(NODE *head)
{
   NODE *temp=head;
   FILE *fp;
   fp=fopen("ST.DAT","w");
   while(temp)
   {
      fwrite(temp,sizeof(NODE)-4,1,fp);
      temp=temp->link;
   }

fclose(fp);
}
