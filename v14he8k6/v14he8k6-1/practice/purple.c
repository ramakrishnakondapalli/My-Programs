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
int cnt=0;char ch;
NODE *insert(NODE* head)
{
	NODE *temp=head,*nu=NULL;int i=1,j=0,k=0;
        nu=realloc(nu,sizeof(NODE *));
        nu->name1=NULL;
        nu->name1=realloc(nu->name1,sizeof(char *));//i++;
//	nu->name1=NULL;
         printf("Enter First name\n");__fpurge(stdin);
         nu->name1[cnt]=realloc(nu->name1[cnt],sizeof(char *));
	 do
	{
nu->name1[cnt]=realloc(nu->name1[cnt],(i+1)*sizeof(char));//__fpurge(stdin);
		nu->name1[cnt][j]=getchar();
		 //nu->name1[j+1]='\0';
                 i++;j++;
	}while(nu->name1[cnt][j-1]!='\n');
	nu->name2=NULL;
        nu->name2=realloc(nu->name2,sizeof(char *));
                printf("%s",nu->name1[cnt]);i=1;j=0;
	printf("Enter Second name\n");
	do
	{
		nu->name2[cnt]=realloc(nu->name2[cnt],(i+1)*sizeof(char *));
		nu->name2[cnt][j]=getchar();
		   i++;j++;
	}while(nu->name2[cnt][j-1]!='\n');
         printf("%s",nu->name2[cnt]);
	while(1)
	{
		printf("Email:Y/N\n");__fpurge(stdin);
                //ch=getchar();
                scanf("%c",&ch);
                printf("%c",ch);
		if(1)
 		{   
                   nu->email=realloc(nu->email,sizeof(char **));
                   nu->email=NULL;
                 // nu->email[cnt]=realloc(nu->email[cnt],(i+1)*sizeof(char *));
                  // nu->email=NULL;
 i=0;j=1;
		//	do
			{
                
		//nu->email[cnt]=realloc(nu->email[cnt],(i+1)*sizeof(char *));
		//		nu->email[cnt][j]=getchar();
				//nu->email[i][j+1]='\0';
                                   i++;j++;
			}//while(nu->email[cnt][j-1]!='\n');
		}
              	else
			nu->email=NULL;
		j++;
	}
              //  for(k=0;nu->email[k];k++)
              //     printf("%s \n",nu->email[k]);
	i=1;j=0;
	while(1)
	{
		printf("Phone:Y/N\n");
		if(getchar()=='Y')
		{
			do
			{
		nu->phone[cnt]=realloc(nu->phone[cnt],(i+1)*sizeof(char));
			nu->phone[cnt][j]=getchar();
			//	nu->phone[i+1]='\0';
                                i++;j++;

			}while(nu->phone[cnt][j-1]!='\n');
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
	}
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

