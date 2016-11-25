#include<stdio.h>
#include<stdlib.h>

struct bst{
		int data;
		struct bst *left,*right;
	};






struct bst * findmin(struct bst *node)
{
	if(node==NULL)
	return NULL;
	if(node->left)
	return findmin(node->left);
	else 
	return node;
}

struct bst *delete(struct bst *node,int data)
{
	struct bst *temp;
	if(node==NULL)
	{
		printf("ele not found");
	}
	else if(data< node->data)
	{
		node->left=delete(node->left,data);
	}
	else if(data > node->data)
	{
		node->right=delete(node->right,data);
	}
	else
	{
		if(node->right && node->left)
		{
			temp=findmin(node->right);
			node->data=temp->data;
			node->right=delete(node->right,temp->data);
		}
		else
		{
			temp=node;
			if(node->left==NULL)
			node=node->right;
			else if(node->right==NULL)
			node=node->left;
			free(temp);
		}
	}
	return node;
}

void insert(struct bst **node,int data)
{	struct bst *nu;
	if(*node==NULL)
	{
		nu=malloc(sizeof(struct bst));
		nu->left=nu->right=NULL;
		nu->data=data;
		*node=nu;
	}
	
	else
	{
		if(data >(*node)->data)
		{
			insert(&((*node)->right),data);
		}
		else if(data<(*node)->data)
		{
			insert(&((*node)->left),data);
		}
	}
}


void printinorder(struct bst *node)
{
	if(node==NULL)
	{
	return;
	}
	else
	{
	printinorder(node->left);
	printf("%d ",node->data);
	printinorder(node->right);
	}
}

void printpreorder(struct bst *node)
{
	if(node==NULL)
	{
	return;
	}
	else
	{
	printf("%d ",node->data);
	printpreorder(node->left);
	printpreorder(node->right);
	}
}

void printpostorder(struct bst *node)
{
	if(node==NULL)
	{
	return;
	}
	else
	{

	printpostorder(node->left);
	printpostorder(node->right);
	printf("%d ",node->data);	
	}
}

struct bst * search(struct bst *node,int data)
{
	if(node==NULL)
	return NULL;
	else if(data<node->data)
	search(node->left,data);
	else if(data>node->data)
	search(node->right,data);
	else
	return node;
}

main()
{
	struct bst *root=NULL,*temp;
	int choice,data;
	while(1)
	{
printf("1.insert 2. printin  3.printpre  4.printpost 5.search  6.del\n");
	printf("enter ur choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("enter the data");
			scanf("%d",&data);
			insert(&root,data);
			break;
		case 2: printinorder(root);
			printf("\n");
			break;
		case 3: printpreorder(root);
			printf("\n");
			break;
		case 4: printpostorder(root);
			printf("\n");
			break;
		case 5: printf("enter the data to be searched\n");
			scanf("%d",&data);
			temp=search(root,data);
			if(temp==NULL)
			printf("data not found\n");
			else
			printf("data found\n");
			break;
		case 6: printf("enter the data to be del\n");
			scanf("%d",&data);
			root=delete(root,data);
			break;
	
		default : printf("invalid chocie");
	
		
	}
	}
}
