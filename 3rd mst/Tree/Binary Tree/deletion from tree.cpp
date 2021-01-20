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

Node * min(Node *cur)
{
    if(cur->left==NULL)
        return cur;

    return min(cur->left);
}

Node * deleteNode(Node *cur, int value)
{
    if(cur==NULL)
        return NULL;
        
    else if(value < cur->data)
        cur->left = deleteNode(cur->left, value);
        
    else if(value > cur->data)
        cur->right = deleteNode(cur->right, value);
        
    else // node found. Let's delete it!
    {
        if(cur->left == NULL && cur->right == NULL)
        {
            cur = NULL;
        }
        else if(cur->left == NULL) // node has only right child
        {
            cur = cur->right;
        }
        else if(cur->right == NULL) // node has only left child
        {
            cur = cur->left;
        }
        else // node has two children
        {
            Node *temp = min(cur->right);
            cur->data = temp->data;
            cur->right = deleteNode(cur->right, temp->data);
        }

    }

    return cur;
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
	Root = insert(Root,7);
	Root = insert(Root,9);
	Root = insert(Root,1);
	Root = insert(Root,10);
	Root = insert(Root,2);
	Root = insert(Root,17);
	Root = insert(Root,0);
	Root = insert(Root,-1);
	Root = insert(Root,8);
	Root = insert(Root,6);
	Root = insert(Root,14);
	
	printf("Binary Tree Looks Like : \n\n");
	Print(Root);
	Root=deleteNode(Root,50);
	printf("\n\nBinary Tree Looks Like : \n\n");
	Print(Root);
	
	return 0;
}
