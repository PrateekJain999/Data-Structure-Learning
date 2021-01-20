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

Node* search(Node * tree, int val)
{
    if(tree==NULL)
    {
        return NULL;
    }

    if(val < tree->data)
    {
        search(tree->left, val);
    }
    else if(val > tree->data)
    {
        search(tree->right, val);
    }
    else if(val == tree->data)
    {
        return tree;
    }
}

int main()
{
	Node *Root=NULL,*tmp=NULL;
	
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
	
	tmp = search(Root, 10);
    if (tmp)
    {
        printf("Searched node=%d\n", tmp->data);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }

	
	return 0;
}
