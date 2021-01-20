#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
};

node * createList(int n);     /* Functions to create and display list*/
void traverseList(node *head);

int main()
{
    int n;
    node *HEAD=NULL;
    
    printf("how many nodes: ");
    scanf("%d", &n);

    HEAD=createList(n);

    printf("\nData in the list \n");
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
