NODE *delete(extern NODE*head)
{
  
  NODE *temp=head,*prev;
     if(head==NULL)
      {


     }
  else if(head->data=Data)
    {
      while(temp->link!=head)
            temp->link=head->link;
             head=temp->link;
            free(temp);
    }
  else
   {
       while(temp->link!=head)
          {
            if(temp->data==Data)
              {
                prev->link=temp->link;
                 free(temp);
              }
              prev=temp;
             temp=temp->link;
          }

   }
    
return(head);

}
