
#include"myHeaders.h"
#include<stdlib.h>
void *add(NODE **ptr2head)
  {
      NODE *nu,*temp;       //step 1: Allocate memory
      nu=malloc(sizeof(NODE));
      //printf("%s %d %f",head->name,head->roll_no,head->mark);
      printf("Enter name");    //step 2:Data Entry
       getchar();
      scanf("%s",nu->name);
      printf("Enter roll_no");
      scanf("%d",&(nu->roll_no));
      printf("Enter mark");
      scanf(" %f",&(nu->mark));
        temp=(*ptr2head);
       if((*ptr2head)==NULL)  //if listis empty then nuwill be1st node aswell aslast
      {                //connect to nu block if existing list
          (*ptr2head)=nu;
          nu->link=NULL;
	return (*ptr2head);
      }
      else      //list is non empty
       {
            nu->link=(*ptr2head);
           (*ptr2head)=nu;
       }
       //printf("%s %d %f\n",head->name,head->roll_no,head->mark);
   //printf("%s %d %f\n",head->link->name,head->link->roll_no,head->link->mark);
   signal(SIGALRM,ptr2head=save(ptr2head));  
    alarm(30);
  return (*ptr2head);
   
  }
