#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct contact{
	char **name1;
	char **name2;
	int **phone;
	char **email;
	struct contact *link;
}NODE;
int cnt;
NODE *insert(NODE* head)
{
	NODE *temp=head,*nu;int i=0,j=0,k=0,ch='\n';
        nu=realloc(nu,sizeof(char *));
	nu->name1=NULL;
        
        printf("Enter First name\n");
	do
	{
	nu->name1=(char **)realloc(nu->name1,(i+1)*sizeof(char **));
		//nu->name1[i]=getchar();
		scanf("%s",nu->name1);
                printf("%s",nu->name1);
		nu->name1[i+1]='\0';i++;
	}while(nu->name1[cnt][i-1]!='\n');
	nu->name2=NULL;
	printf("Enter Second name\n");
/*	do
	{
		nu->name2=realloc(nu->name2,(i+1)*sizeof(char));
		//nu->name2[i]=getchar();
		nu->name2[i+1]='\0';i++;
	}while(nu->name2[i-1]!='\n');
	while(1)
	{
		printf("Email:Y/N\n");
		if(getchar()=='Y')
		{   
                      nu->email=realloc(nu->email,(i+1)*sizeof(char *));
                       nu->email=NULL;
			do
			{
				nu->email[i]=realloc(nu->email[i],(i+1)*sizeof(char));
				nu->email[i][j]=getchar();
				nu->email[i][j+1]='\0';
                                    j++;
			}while(nu->email[i-1][j-1]!='\n');
		}
                for(k=0;nu->email[k];k++)
                   printf("%s \n",nu->email[k]);
		else
			nu->email=NULL;
		j++;
	}

	while(1)
	{
		printf("Phone:Y/N\n");
		if(getchar()=='Y')
		{
			do
			{
				nu->phone=realloc(nu->phone[j],(i+1)*sizeof(char));
				nu->phone=getchar();
				nu->phone[i+1]='\0';

			}while(nu->phone[i-1]!='\n');
		}
		else
			nu->phone=NULL;
		j++;
	}
	if(head==NULL)
	{
		head=nu;
		nu->link=NULL;
	}
	else
	{
		nu->link=head;
		head=nu;
	}*/
}
void print(NODE *head)
{
	NODE *temp=head,*temp1;int ch;int i,j;
	while(1)
	{
		printf("Enter choice\n");
		printf("\na.By Name\nb.By contact\nc.Back to menu\n");
		scanf("%c",&ch);
		switch(ch)
		{
		case 'a': for(i=1;i<cnt;i++)
			  {
			  memcpy(temp1,temp+i,sizeof(temp+i));
			  for(j=i-1;j>=0;j--)
			  {
			  if(strcmp((temp+j)->name1,temp1->name1)==1)
			  memcpy(temp+i,temp+j,sizeof(temp+j));
			  }
			  j++;
			  memcpy(temp+j,temp1,sizeof(temp1));
			  }
	  for(i=0;i<cnt;i++)
 printf("%s  %s  %s  %s %s %s",(temp+i)->name1 ,(temp+i)->name2,(temp+i)->phone[0],(temp+i)->phone[1],(temp+i)->email[0],(temp+i)->email[1],(temp+i)->email[3]);
				  break;
	case 'b': for(i=1;i<cnt;i++)
		  {
		  memcpy(temp1,temp+i,sizeof(temp+i));
		  for(j=i-1;j>=0;j--)
		  {
                   if(strcmp((temp+j)->phone[0],temp1->phone[0])==1)
         	  memcpy(temp+i,temp+j,sizeof(temp+j));
		  }
		  j++;
		  memcpy(temp+j,temp1,sizeof(temp1));
		  }
      for(i=0;i<cnt;i++)	
       printf("%s  %s  %s  %s %s %s",(temp+i)->name1 ,(temp+i)->name2,(temp+i)->phone[0],(temp+i)->phone[1],(temp+i)->email[0],(temp+i)->email[1],(temp+i)->email[3]);
		  break;
	case 'c': return;
	default :printf("Invalid choice\n");

		}
		/*  while(temp)
		    {
		    printf("\nFirst Name\tLast Name\tEmail\tPhone\n");
		    printf("%s %s %s %s %s %s %s",temp->name1,temp->name2,temp->email[0],temp->email[1],temp->email[2],temp->phone[0],temp->phone[1]);
		    temp=temp->link;
		    }*/

	}    
}
NODE *search(NODE* head)
{
NODE*temp=head;
  while(1)
   {
     printf("Enter choice\na.By Name\nb.By Contact\nc.Back to Menu");


   }




}

	main()
	{

		NODE *head=NULL;char choice;
		while(1)
		{
			printf("Enter choice\ni:insert\np:display\ns:search\nd:delete\nc:clear screen\nq:quit\n");
			scanf("%s",&choice);
			switch(choice)
			{
				case 'i' :head=insert(head); 
					  break;
				case 'p' :print(head);
					  break;
				default: printf("Invlaid choice\n");
			}
		}

	}

