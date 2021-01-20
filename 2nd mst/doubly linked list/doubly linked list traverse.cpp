#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
};


node* createList(int n);
void displayListFromFirst(node *head);
void displayListFromEnd(node *head);


int main()
{
    int n, choice;
    struct node* HEAD;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    HEAD=createList(n); // Create list of n nodes

    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End : ");
    scanf("%d", &choice);

    if(choice==1)
    {
    	printf("\n\n\ndisplaying list from First: ");
        displayListFromFirst(HEAD);
    }
    else if(choice == 2)
    {
    	printf("\n\n\ndisplaying list from end: \n");
        displayListFromEnd(HEAD);
    }

    return 0;
}

node* createList(int n)
{
    node *temp=NULL,*p=NULL,*head=NULL;
    int i=0;
    
    for(i=0;i<n;i++)
    {
    	temp=(node*)malloc(sizeof(node));
    	
    	printf("enter the node %d : ",i+1);
    	scanf("%d",&(temp->data));
    	
    	temp->next=NULL;
    	temp->prev=NULL;
    	
    	if(head==NULL)
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
			temp->prev=p;
		}
	}
	return head;
}

void displayListFromFirst(node * head)
{
    struct node *p;
    
    p=head;
    while(p!=NULL)
    {
    	printf("%d->\t",p->data);
    	p=p->next;
	}
}

void displayListFromEnd(node *head)
{
    struct node *p;
    
    p=head;
    while(p->next!=NULL)
    {
    	p=p->next;
	}
	while(p!=NULL)
    {
    	printf("%d->\t",p->data);
    	p=p->prev;
	}
}
