#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

node* createNode(int value)
{
    struct node* newNode = (node *)malloc(sizeof(struct node));
    
	newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

node* insert(node *root, int value)
{
	if(root==NULL)
	{
		root = createNode(value);
	}
    else if(value < root->data)
    {
    	root->left = insert(root->left,value);
	}
	else if(value > root->data)
    {
    	root->right = insert(root->right,value);
	}
    return root;
}

void inorder(struct node* root)
{
    if(root == NULL) 
	{
		return;
	}
	
    inorder(root->left);
    
	printf("%d ->", root->data);
    
	inorder(root->right);
}

void preorder(struct node* root)
{
    if(root == NULL)
	{
		return;
	}
    printf("%d ->", root->data);
    
	preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root) 
{
    if(root == NULL) 
	{
		return;
	}
    postorder(root->left);
    postorder(root->right);
    
    printf("%d ->", root->data);
}


int main()
{
    struct node* root = NULL;
    
    root=insert(root, 5);
    root=insert(root, 7);
    root=insert(root, 4);
    root=insert(root, 2);
    root=insert(root, 3);
    
    printf("Inorder traversal \n");
    inorder(root);

    printf("\nPreorder traversal \n");
    preorder(root);

    printf("\nPostorder traversal \n");
    postorder(root);
}
