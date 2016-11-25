#include"myheadders.h"
node *update_list(node *head)
{
FILE *fp;
node v;
node *nu,*temp;
fp=fopen("st.dat","r");
temp=head;
while(fread(&v,sizeof(node)-sizeof(temp),1,fp)==1)
   {
     nu=calloc(1,sizeof(node));
     memcpy(nu,&v,sizeof(node)-sizeof(node*));
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
}//while
fclose(fp);
return head;
}

