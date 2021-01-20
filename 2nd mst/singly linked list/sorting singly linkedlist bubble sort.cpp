#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data 
    struct node *next; // Address 
};


node* createList(int n);
void swapList(node * head);
void displayList(node * head);


int main()
{
	node *HEAD=NULL;
	int n;
	
	printf("how many nodes : ");
	scanf("%d",&n);
	
	HEAD=createList(n);
	
	printf("\n\nEntered nodes are: \n\n");
	displayList(HEAD);
    
    swapList(HEAD);
    printf("\n\nsorted list is:\n\n");
    displayList(HEAD);

	return 0;
}
    
node * createList(int n)
{
	node *head=NULL,*temp=NULL,*p=NULL;
	int i;
	
	for(i=0;i<n;i++)
	{
		temp=(node *)malloc(sizeof(node));
		
		printf("enter the %d node : ",i+1);
		scanf("%d",&(temp->data));
		
		temp->next=NULL;
		
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
	}
}
	return head;
}

void swapList(node* head)
{
    struct node *i=head,*j;
    int temp;
	
	for(i=head;i->next!=NULL;i=i->next)
    {
    	for(j=i->next;j!=NULL;j=j->next)
        {
        	if(i->data>j->data)
        	{
        		temp=i->data;
        		i->data=j->data;
        		j->data=temp;
			}
	    }
	}
}

void displayList(node * head)
{
	struct node *p=head;
	while(p != NULL)
	{
		printf("%d->\t",p->data);
		p=p->next;
	}
}
