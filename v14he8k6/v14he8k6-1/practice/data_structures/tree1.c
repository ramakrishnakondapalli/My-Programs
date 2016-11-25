#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
           int data;
          struct bst *left;
          struct bst *right;
          }node;
node *insert(node *root,int data)
{
//  node *root=NULL  
 if(head==NULL)
       {
           root->data=dat;
           root->left=root->right=NULL;    
       }
   else if(root->left<dat)
      {

        insert(root->left,dat);
      }
   else if(root->left>dat)
      {

        insert(root->right,dat);
      }


}
void printinorder(noide *root)
{
    printinorder(node->left);
    printinorder(node->right);
    print("%d",nide->data);
 
}
node* delete(node *)
main()
{





}
