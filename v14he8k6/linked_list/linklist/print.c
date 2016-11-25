#include"myHeaders.c"
void print(NODE *head)
 {
    NODE *temp=head;
    while(temp)
    {
      printf("%s %d %f",temp->name,temp->roll_no,temp->mark);
        temp=temp->link;
    }

 }
