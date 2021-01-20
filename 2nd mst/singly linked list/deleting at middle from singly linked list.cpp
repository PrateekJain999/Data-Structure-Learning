#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
};

void traverseList(node *head);
node * createList(int n);     /* Functions to create and display list*/
int searchList(node *head,int search);
void deleteList(node* head,int position);

int main()
{
    int n,position;
    node *HEAD=NULL;
    
    printf("how many nodes: ");
    scanf("%d", &n);

    HEAD=createList(n);

    printf("enter the value of position to delete an element : ");
    scanf("%d",&position);
    
    deleteList(HEAD,position);
    traverseList(HEAD);

    return 0;
}

node * createList(int n)
{
    node *head=NULL, *temp=NULL,*p=NULL;
    int i;

    
    for(i=0; i<n; i++)
    {
        temp = (node*)malloc(sizeof(node)); // creating isolated node one by one.

        printf("Enter the data of node %d: ", i+1);
        scanf("%d", &(temp->data));

        temp->next = NULL;

        if(head==NULL) //if list is currently empty , the make temp as first node.
        {
        	head=temp;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
		}
    }
    return head;
}


void traverseList(node * head)
{
    struct node *p=head;

    // Return if list is empty 
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    while(p != NULL)
    {
        printf("%d ->  ", p->data); // Print data of current node
        p = p->next;                 // Move to next node
    }
}
void deleteList(node * head,int position)
{
	node *p,*q;
	
	p=q=head;
	int i=1;
	
	for(i=1;i<position-1;i++)
	{
		p=p->next;
	}
	q=p->next;
	p->next=q->next;
	
	free(q);
}
