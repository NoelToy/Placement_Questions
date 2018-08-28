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
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;

node *create(int x)
{
	node *p;
	
	p=(node *)malloc(sizeof(struct node));
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	
	return p;
}

void insert(node *t)
{
	node *temp;
	int x;
	printf("\nEnter the key value:");
	scanf("%d",&x);
		
	while(t!=NULL)
	{
		if(x<=t->data)
		{
			temp=t;
			t=t->left;
		}
		else
		{
			temp=t;
			t=t->right;
		}
	}
	if(x<=temp->data)
	{
		temp->left=create(x);
	}
	else
	{
		temp->right=create(x);
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
void preorder(node *t)
{
	if(t!=NULL)
	{
		printf("\nThe Data is:%d",t->data);
		preorder(t->left);
		preorder(t->right);
	
	}
}

/*void search(int x,node *t)	Search Without using Recursion
{
	while(t!=NULL)
	{
		if(t->data==x)
		{
			printf("\nThe Element Found!!");
			return;
		}
		else if(x<=t->data)
		{
			t=t->left;
		}
		else
		{
			t=t->right;
		}
	}
	printf("\nThe Element Not Found");
}*/

void search(int x,node *t) //Search Using Recursion
{
	if(t==NULL)
	{
		printf("\nThe Element Not Found");
		return;
	}
	if(t->data==x)
	{
		printf("\nThe Element Found!!");
		return;
	}
	else if(x<=t->data)
	{
		search(x,t->left);
	}
	else
	{
		search(x,t->right);
	}
}
void main()
{
	int ch,x;
	node *root;
	printf("\nEnter the key value:");
	scanf("%d",&x);
	root=create(x);
	
	do
	{
		printf("\n1.Insert New Node\n2.Inorder Traversal\n3.Preorder Traversal\n4.Search\n5.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					insert(root);
			break;
			case 2:
					inorder(root);
			break;
			
			case 3:
					preorder(root);
			break;
			case 4:
					printf("\nEnter the key value:");
					scanf("%d",&x);
					search(x,root);
			break;
			case 5:
				printf("\nExiting....");
			break;
			default:
				printf("\nInvalid Choice!!");
				
		}
	}while(ch!=5);
	
}
