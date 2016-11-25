#include<stdio.h>
#include<string.h>
#include"myHeaders.h"
NODE *updatelist(NODE *head)
{
   NODE *temp=NULL,*nu,v;
   FILE *fp;
    fp=fopen("ST.DAT","r");
    if(fp==NULL)
     {
      printf("No file Exists!");
        return;
       }
     head=NULL;
      // printf("%s",head->name);
   while((fread(&v,sizeof(NODE)-4,1,fp))==1)
    {
      nu=calloc(1,sizeof(NODE));
      //fread(temp,sizeof(NODE),1,fp);
      memcpy(nu,&v,sizeof(NODE)-4);
      if(head==NULL)
       {
             head=nu;
             temp=nu;
       }
      else
       {
         temp->link=nu;
          temp=nu;
       }
//       temp=temp->link;
     }
fclose(fp);
return head;
}
