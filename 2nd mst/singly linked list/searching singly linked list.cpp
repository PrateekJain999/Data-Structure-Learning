#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
};

node * createList(int n);     /* Functions to create and display list*/
int searchList(node *head,int search);

int main()
{
    int n,search,sr;
    node *HEAD=NULL;
    
    printf("how many nodes: ");
    scanf("%d", &n);

    HEAD=createList(n);

    printf("enter the value to search : ");
    scanf("%d",&search);
    
    sr=searchList(HEAD,search);
    
    if(sr!=-1)
    {
    	printf("\nvalue found at %d position.",sr);
	}
	else
	{
		printf("value not found.");
	}

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

int searchList(node * head,int search)
{
    struct node *p=head;
	int index=0,c=0;
	
	while(p!=NULL)
	{
	    index++;
		if(search==p->data)
		{
			c=1;
			break;
		}
		p=p->next;
	}
    if(c==0)
    {
    	return -1;
	}
	else
	{
		return index;
	}
}
