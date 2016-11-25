#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct contact{
	char **fname;
	char **lname;
	int **phone;
	char **email;
	struct contact *link;
}NODE;
int cnt=0;
NODE *insert(NODE* head)
{
	NODE *temp=head,*nu=NULL;int i=0,j=0,k=0;
        
        nu=calloc(1,sizeof(char *));
        nu->fname=NULL;
        nu->fname[cnt]=calloc(1,sizeof(char *));
        nu->fname[cnt]=calloc(1,15*sizeof(char *));
       // nu->fname[cnt]=NULL;
       // printf("%s",nu->fname[cnt]);
	
         printf("Enter First name\n");
       //  scanf("%s",nu->fname[cnt]);	
                // printf("%s",nu->name1[0]);
	
        nu->lname[cnt]=calloc(1,15*sizeof(char *));
       printf("Enter Second name\n");
	scanf("%s",nu->lname[cnt]);
	while(1)
	{
		printf("Email:Y/N\n");
		if(getchar()=='Y')
		{   
                      nu->email[cnt]=calloc(1,25*sizeof(char *));
                       nu->email[cnt]=NULL;
                      scanf("%s",nu->email[cnt]);
			
		}
               // for(k=0;nu->email[k];k++)
               //    printf("%s \n",nu->email[k]);
		else
			nu->email=NULL;
		j++;
	}

	while(1)
	{
		printf("Phone:Y/N\n");
		if(getchar()=='Y')
		{
			
			
			nu->phone[cnt]=calloc(1,10*sizeof(char *));
	                 scanf("%s",nu->phone[cnt]);
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

    cnt++;
}
void print(NODE *head)
{
	NODE *temp=head,*temp1=head;
         int ch;int i,j;
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
			  if(strcmp((temp+j)->fname[i],temp1->fname[j])==1)
			  memcpy(temp+i,temp+j,sizeof(temp+j));
			  }
			  j++;
			  memcpy(temp+j,temp1,sizeof(temp1));
			  }
	  for(i=0;i<cnt;i++)
 printf("%s  %s  %s  %s %s %s",(temp+i)->fname[i] ,(temp+i)->lname[i],(temp+i)->phone[0],(temp+i)->phone[1],(temp+i)->email[0],(temp+i)->email[1],(temp+i)->email[3]);
				  break;



	case 'b': for(i=1;i<cnt;i++)
		  {
		  memcpy(temp1,temp+i,sizeof(temp+i));
		  for(j=i-1;j>=0;j--)
		  {
                   if(strcmp((temp+j)->phone[i],temp1->phone[j])==1)
         	  memcpy(temp+i,temp+j,sizeof(temp+j));
		  }
		  j++;
		  memcpy(temp+j,temp1,sizeof(temp1));
		  }
      for(i=0;i<cnt;i++)	
       printf("%s  %s  %s  %s %s %s",(temp+i)->fname ,(temp+i)->lname,(temp+i)->phone[0],(temp+i)->phone[1],(temp+i)->email[0],(temp+i)->email[1],(temp+i)->email[3]);
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

