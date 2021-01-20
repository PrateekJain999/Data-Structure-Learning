#include<stdio.h>
#include<Stdlib.h>

struct Node
{
	Node *left;
	Node *right;
	int data;
};

Node * createList(int data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	
	node->data=data;
	node->left=node->right=NULL;
	
	return node;
}

Node * insert(Node * root,int data)
{
	if(root==NULL)
	{
		root=createList(data);
	}
	else if(data < root->data)
	{
		root->left= insert(root->left,data);
	}
	else
	{
		root->right= insert(root->right,data);
	}
	
	return root;
}

void Print(Node *root)
{
	if(root)
	{
		printf("%d ",root->data);
		Print(root->left);
		Print(root->right);
	}
}

int main()
{
	Node *Root=NULL;
	
	Root = insert(Root,5);
	Root = insert(Root,6);
	Root = insert(Root,4);
	Root = insert(Root,3);
	Root = insert(Root,2);
	
	
	printf("Binary Tree Looks Like : \n\n");
	Print(Root);
	
	return 0;
}
