#include<stdio.h>
typedef struct bst{
           int data;
           struct bst *left,*right;
           }Node;

main()
{char ch;
while(1)
{
 printf("**********Main************\n 1.Inorder2.Preorder3.Post order4.Print 5.Serach 6.Insert 7.Delete\n");
 scanf("%c",&ch);
 swtch(ch)
  {
     case 1:root=inorder(root);
            break;
     case 2:root=preorder(root);
             break;
     case 3:root=postorder(root);
            break;
     case 4:print(root);
            break;
     case 5:search(root);
             break;
     case 6:root=insert(root);
             break;
     case 7:root=delete(root);
            break;

   }
}

}
Node*  inorder(Node *root)
{ Node *temp=root;
   int i;
   while(temp->left->left!=NULL)
   {
        printf("%d %d %d",temp->data,temp->left,temp->right);
        
    }

}
Node* preorder(Node *root)
{



}
Node* postorder(Node *root)
{


}
void print(Node *root)
{



}
void search(Node *root)
{




}
Node* insert(Node* root)
{



}
Node * delete(Node *root)
{




} 
