#include"myHeaders.c"
#include<stdio.h>
#include<stdlib.h>
NODE *updatelist(NODE *head)
{
   NODE *temp=0,v,nu;
   FILE *fp;
   fp=fopen("ST.DAT","r");
   temp=head;
   while(fread(&v,sizeof(NODE)-sizeof(NODE*),1,fp))
    {
       nu=calloc(1,sizeof(NODE));
       fread(temp,sizeof(NODE)-4,1,fp);
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
  
}
fclose(fp);
return(head);

}
