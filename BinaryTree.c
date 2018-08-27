/*

$$$$$$$\                      $$\   $$\                     $$\       $$$$$$$$\                  
$$  __$$\                     $$$\  $$ |                    $$ |      \__$$  __|                 
$$ |  $$ |$$\   $$\           $$$$\ $$ | $$$$$$\   $$$$$$\  $$ |         $$ | $$$$$$\  $$\   $$\ 
$$$$$$$\ |$$ |  $$ |          $$ $$\$$ |$$  __$$\ $$  __$$\ $$ |         $$ |$$  __$$\ $$ |  $$ |
$$  __$$\ $$ |  $$ |          $$ \$$$$ |$$ /  $$ |$$$$$$$$ |$$ |         $$ |$$ /  $$ |$$ |  $$ |
$$ |  $$ |$$ |  $$ |          $$ |\$$$ |$$ |  $$ |$$   ____|$$ |         $$ |$$ |  $$ |$$ |  $$ |
$$$$$$$  |\$$$$$$$ |$$\       $$ | \$$ |\$$$$$$  |\$$$$$$$\ $$ |         $$ |\$$$$$$  |\$$$$$$$ |
\_______/  \____$$ |$  |      \__|  \__| \______/  \_______|\__|         \__| \______/  \____$$ |
          $$\   $$ |\_/                                                                $$\   $$ |
          \$$$$$$  |                                                                   \$$$$$$  |
           \______/                                                                     \______/ 

@author Noel Toy
@credits https://www.thecrazyprogrammer.com/2013/12/c-program-to-create-binary-tree-using-recursion.html
*/
#include<stdio.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;

node *create()
{
	node *p;
	int x;
	
	printf("\nEnter the data(No data -1):");
	scanf("%d",&x);
	
	if(x==-1)
	{
		return NULL;
	}
	p=(node *)malloc(sizeof(struct node));
	p->data=x;
	
	printf("\nEnter the left child of %d:",x);
	p->left=create();
	printf("\nEnter the right child of %d:",x);
	p->right=create();
	
	return p;
}

void preorder(node *t)
{
	if(t!=NULL)
	{
		printf("\nThe Data is:%d",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}

void inorder(node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("\nThe Data is:%d",t->data);
		inorder(t->right);
	
	}
}

void postorder(node *t)
{
	if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf("\nThe Data is:%d",t->data);
		
	
	}
}
void main()
{
	node *root;
	root=create();
	printf("The pre order traversal of the tree is:\n");
	preorder(root);
	printf("\nThe in order traversal of the tree is:\n");
	inorder(root);
	printf("\nThe post order traversal of the tree is:\n");
	postorder(root);
}
