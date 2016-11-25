#include"myheadders.h"
void save(node *head)
{
node *temp=head;
FILE *fp;
fp=fopen("st.dat","w");
while(temp)
     {
       fwrite(temp,sizeof(node)-sizeof(temp),1,fp);
       temp=temp->link;
     }
 fclose(fp);
}

