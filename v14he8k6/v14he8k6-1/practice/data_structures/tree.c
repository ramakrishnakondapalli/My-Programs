#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct binarysearch{
            int data;
            struct bst *left;
            struct bst *right;
           }bst;
bst* insert(bst* root,int num)
{
bst*temp=root,*nu;
nu=calloc(1,sizeof(bst));

if(root==NULL)
{
  nu->left=NULL;
  nu->right=NULL;
  root=nu;
  return;
}
else if(nu->data<=num)
{
  insert(temp->left,num);
}
else
{
  insert(temp->right,num);
}



}
bst* delete(bst* root,int num)
{
bst*temp=root;
if(root==NULL)
{
   printf("Tree is Empty\n");
   return;
}
if(root->data==num)
{


}


}
void inorder(bst* root)
{




}
void preorder(bst* root)
{




}
void postorder(bst* root)
{




}
bst* search(bst* root)
{





}

main()
{
int choice;
while(1)
{
printf("Enter choice \n1.insert\n2.delete\n3.print inorder\n4.print pre order\n5.print post order\n6.search\n");
scanf("%d",&choice);
switch(choice)
{
  case 1:printf("Enter data to insert\n");
         scanf("%d",&num);
          root=insert(root,num);
         break;
  case 2:printf("Enter data to delete\n");
         scanf("%d",&num);
          root=delete(root,num)    
         break;
  case 3:inorder(root);
          break;
   case 4:preorder(root);
          break;
    case 5:postorder(root);
           break;
    case 6:search(root);
           break;
    default:printf("Enter correct choice\n");
}  

}
}
