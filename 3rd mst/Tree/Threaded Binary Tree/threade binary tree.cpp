#include<stdio.h>
#include<stdlib.h>

struct Node
{
	Node *left,*right=NULL;
	int data;
};

Node * createList(int data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	
	node->data=data;
	node->left=node->right=NULL;
	
	return node;
}

Node *insert(Node *Root,int data)
{
	if(Root==NULL)
	{
		Root=createList(data);
	}
	else if(data < Root->data)
	{
		Root->left=insert(Root->left,data);
	}
	else
	{
		Root->right=insert(Root->right,data);
	}
}

Node* leftMost(struct Node *n) 
{ 
    if (n == NULL) 
       return NULL; 
  
    while (n->left != NULL) 
        n = n->left; 
  
    return n; 
} 
   
void Inorder(Node *root) 
{ 
    Node *cur = leftMost(root); 
    while (cur != NULL) 
    { 
        printf("%d ", cur->data); 
  
        if (cur->right) 
            cur = cur->right; 
        else 
            cur = leftMost(cur->right); 
    } 
}

main()
{
	Node * node=NULL;
	
	node=insert(node,6);
	node=insert(node,5);
	node=insert(node,7);
	node=insert(node,2);
	node=insert(node,3);
	node=insert(node,8);
	node=insert(node,9);
	node=insert(node,1);
	node=insert(node,0);
	node=insert(node,10);
	node=insert(node,4);
	
	printf("Inorder Looks Like: \n\n");
	Inorder(node);
}
