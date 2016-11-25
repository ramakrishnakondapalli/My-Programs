#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>
#define MAX 10
struct contact{

     char name[10];
     char num[10];
     char mail[20];
       };
char p[10][3][20];int cnt;
struct termios attrval;
void input()
{
int i;
// for(i=0;i<10;i++)
// p[cnt]=calloc(3,20*sizeof(char**));
 printf("Enter name");
 scanf("%s",p[cnt][0]);
  printf("Enter number");
  scanf("%s",p[cnt][1]);
  printf("Enter mail");
  scanf("%s",p[cnt][2]);
  cnt++;

}
void print()
{
  int i;
  if(cnt==0)
  {
    printf("list is empty\n");
  }
for(i=0;i<cnt;i++)
{
  printf("%s  %s  %s \n",p[i][0],p[i][1],p[i][2]);
}

}
void delete()
{

  int i;char name[10][3][20];
  if(cnt==0)
  {
   printf("list is empty\n");return;
   }
  printf("Enter name to delete\n");
  scanf("%s",name[0][0]);
  printf("%s",name[0][0]);
  for(i=0;i<cnt;i++)
  { 
     printf("%s",p[i][0]);
   if(strcmp(p[i][0],name[0][0])==0)
    {
         memmove(p+i,p+i+1,(cnt-i+1)*sizeof(p[cnt]));
    }
  }
  cnt--;
}
/*void sort()
{
 char  temp[1][3][10];int i,j;
  if(cnt==0)
   {
   printf("List is Empty\n");
   return;
   }
  for(i=cnt-1;i>0;i--)
   {  
      for(j=0;j<i;j++)
       {    if(p[j+1][0])
            {
             if(strcmp(p[j][0],p[j+1][0])!=0)
              {
                  memcpy(temp[0],p[j],sizeof(temp[0]));
                  memcpy(p[j],p[j+1],sizeof(temp[0]));
                  memcpy(p[j+1],temp[0],sizeof(temp[0]));
              }
             } 
       }
   }
}*/
void sort()
{
char temp[1][3][10];int i,j;
if(cnt==0)
{
printf("List is Empty\n");
return;
}
for(i=1;i<cnt;i++)
{
  memcpy(temp[0],p[i],sizeof(temp[0]));
  for(j=i-1;j>=0;j--)
   {
     printf("%s %s\n",temp[0][0],p[j][0]);
    if(strcmp(temp[0][0],p[j][0])==1)
      break;
	else
      memcpy(p[j+1],p[j],sizeof(temp[0]));    
   }
   j++;
  memcpy(p[j],temp[0],sizeof(temp[0]));
}
}
void find()
{
  char str[10],ptr[10];int i,ch;
 tcgetattr(0,&attrval);
 attrval.c_lflag&=~ICANON;
 tcsetattr(0,TCSANOW,&attrval);

 
   for(i=0;i<10;i++){
 printf("Enter name\n");
     str[i++]=getchar();//}
   //strcpy(str,ptr);
  for(i=0;i<cnt;i++)
  {
    if(ptr=(strstr(p[i][0],str)||strstr(p[i][1],str)))
      {
          printf("%s\t%s\t%s\t\n",p[i][0],p[i][1],p[i][2]);
        //   printf("%c",str[i]);
      }
    }
   str[i]='\0';
  }//while(str[i-1]!='\n');
 
  
  attrval.c_lflag|=ICANON;
 tcsetattr(0,TCSANOW,&attrval);
}
main()
{
 char ch;
while(1)
{  
printf("\nEnter choice\ni:input\np:print\nd:delete\ns:sort\nf:find\nc:clear screen\nq:quit\n");
  scanf("%c",&ch);
  getchar();
  switch(ch)
   {
     case 'i':input();getchar();break;
     case 'p':print();break;
     case 'd':delete();break;
     case 'f':find();getchar();break;
     case 's':sort();break;
     case 'q':return;
     case 'c':fflush(stdout);break;
     default :printf("Invalid choice\n");
    }

}
}
