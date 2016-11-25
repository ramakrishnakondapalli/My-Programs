#include<stdio.h>
int count=0;
enum status{pass,fail};
struct A{
               int day;
               int month;
               int year;
          };
struct ID{
          char year[3];
          char branch;
          char course;
          int batch;
          char number[2];
        }; 
//union ID{
              //struct B AID;
              //struct C VID;
//              struct D vid;
              //struct E PID;
//         };
struct student{
               int seqno;
               struct ID UID;
               char name[20];
               int cno[10];
               int marks[2];
               struct A dob;
               char status[4];
              };
//void delete(struct );
//void print(struct );
//void insert(struct );
main()
{
   char ch;
  struct student v[10];
while(1)
{
  printf("Enter choice\n i:insert\n p:print\nd:delete\nm:modify\n q:quit\n");
   getchar();
  scanf("%c",&ch);
  switch(ch)
  {
    case 'i':insert(v);
             getchar();
             break;
    case 'p': print(v);
              getchar();
              break;
    case 'd':delete(v);break;
    case 'q':return;
 //   case 'm':modify(v);break;
    
  }
}
}
void insert(struct student *p)
{
int i;
  if(count==10)
  {
  printf("Memory Full\n");
 return;
  }
 for(i=0;i<=count;i++)
{
   printf("Enter seq no");  
   scanf(" %d",&p[i].seqno);
   printf("Enter UID");  
   scanf(" %s",(p+i)->UID);
   getchar();
   printf("Enter name");  
   scanf(" %s",(p+i)->name);
   printf("Enter contactno");  
   scanf(" %s",(p+i)->cno);
   printf("Enter marks");  
   scanf(" %s",(p+i)->marks);
   printf("Enter date of birth");  
   scanf(" %d",&(p+i)->dob);
   printf("Enter status");  
   scanf(" %d",&(p+i)->status);
   printf("%d",sizeof(student));
   count++;
   return;
     } 
 }
void print(struct student *p)
{
  int i;
//  printf("%d\n",count);
   if(count==0)
     {

      printf("No reords present:");
       return;
     }
  for(i=0;i<=count;i++)
  {
    printf("\nseq no:%d\n",p->seqno);
    printf("Vector ID: %s\n",p->UID);
    printf("NAME: %s\n",p->name);
    printf("MOBILE NO: %s\n",p->cno);
    printf("MARKS: %s\n",p->marks);
    printf("DOB: %s",p->dob);
    printf("STATUS: %d",p->status);
    p++;   
 }
}
void delete(struct student *p)
{
  int i,r;
  if(count==10)
  {
    printf("Memory full\n");
    return;
  }
   printf("Enter roll no to delete:");
   scanf("%d",&r);
   for(i=0;i<count;i++)
   {
    if(p->seqno==r)
    break;
    p++;
   }
  if(i==count)
 {
  printf("Record not found");
   return;
 }
 memmove(p,p+1,(count-i-1)*sizeof(struct student));
  count--;
}
